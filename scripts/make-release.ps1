<#
.SYNOPSIS
  Builds the Data-rooted release zip: F4SE\Plugins\NoAutoGreet.dll, and the docs under
  Docs\NoAutoGreet. Build the dll first (build-rd, Release). Run with pwsh. Refuses an uncommitted
  source, a dll older than its source, a dll that names this machine, or an existing zip for this
  VERSION (-Force rebuilds).
#>
[CmdletBinding()]
param([switch] $Force, [string] $OutDir = '')

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
if (-not $OutDir) { $OutDir = Join-Path $root 'build\release' }

$version = (Get-Content (Join-Path $root 'VERSION') -Raw).Trim()
if ($version -notmatch '^[0-9]+\.[0-9]+\.[0-9]+$') { throw "VERSION must hold a plain x.y.z, not '$version'" }
$zip = Join-Path $OutDir "NoAutoGreet-$version.zip"
if ((Test-Path $zip) -and -not $Force) { throw "$zip exists. Bump VERSION, or pass -Force." }

Push-Location $root
try { $dirty = @(git status --porcelain -- src CMakeLists.txt vcpkg.json VERSION 2>$null) } finally { Pop-Location }
if ($dirty.Count -gt 0) { throw ("Commit the sources first:`n  " + ($dirty -join "`n  ")) }

$dll = Join-Path $root 'build-rd\Release\NoAutoGreet.dll'
if (-not (Test-Path $dll)) { throw "No $dll. Build it: cmake --build build-rd --config Release" }
$newest = Get-ChildItem (Join-Path $root 'src') -File | Sort-Object LastWriteTime -Descending | Select-Object -First 1
if ((Get-Item $dll).LastWriteTime -lt $newest.LastWriteTime) { throw "The dll is older than src\$($newest.Name). Rebuild it." }
$text = [Text.Encoding]::ASCII.GetString([IO.File]::ReadAllBytes($dll))
foreach ($name in @($env:USERNAME, $env:COMPUTERNAME)) {
    if ($name -and $text.Contains($name)) { throw "The dll contains '$name', a build-machine name. Not packaged." }
}

$stage = Join-Path $OutDir "NoAutoGreet-$version"
if (Test-Path $stage) { Remove-Item $stage -Recurse -Force }
$plugins = Join-Path $stage 'F4SE\Plugins'
New-Item -ItemType Directory -Force $plugins | Out-Null
Copy-Item $dll $plugins -Force

# Docs under Docs\<Mod>, never the Data root, where every mod's README would collide.
$docs = Join-Path $stage 'Docs\NoAutoGreet'
New-Item -ItemType Directory -Force $docs | Out-Null
foreach ($doc in 'LICENSE', 'README.md', 'CHANGELOG.md') { Copy-Item (Join-Path $root $doc) $docs -Force }

if (Test-Path $zip) { Remove-Item $zip -Force }
Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zip -CompressionLevel Optimal
$sha = (Get-FileHash $zip -Algorithm SHA256).Hash.ToLower()
$dllSha = (Get-FileHash $dll -Algorithm SHA256).Hash.ToLower()
Write-Host "NoAutoGreet $version"
Write-Host "  $zip"
Write-Host "  zip sha256 $sha"
Write-Host "  dll sha256 $dllSha"
