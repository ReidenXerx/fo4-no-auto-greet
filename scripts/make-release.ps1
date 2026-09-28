<#
.SYNOPSIS
  Builds the Data-rooted release zip: NoAutoGreet.esp, and the docs under Docs\NoAutoGreet.
  Run with pwsh. Refuses an uncommitted source or an existing zip for this VERSION (-Force rebuilds).
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
try { $dirty = @(git status --porcelain -- tools VERSION 2>$null) } finally { Pop-Location }
if ($dirty.Count -gt 0) { throw ("Commit the sources first:`n  " + ($dirty -join "`n  ")) }

$stage = Join-Path $OutDir "NoAutoGreet-$version"
if (Test-Path $stage) { Remove-Item $stage -Recurse -Force }
New-Item -ItemType Directory -Force $stage | Out-Null

& python (Join-Path $root 'tools\make_esp.py') (Join-Path $stage 'NoAutoGreet.esp')
if ($LASTEXITCODE -ne 0) { throw 'make_esp.py failed' }

# Docs under Docs\<Mod>, never the Data root, where every mod's README would collide.
$docs = Join-Path $stage 'Docs\NoAutoGreet'
New-Item -ItemType Directory -Force $docs | Out-Null
foreach ($doc in 'LICENSE', 'README.md', 'CHANGELOG.md') { Copy-Item (Join-Path $root $doc) $docs -Force }

if (Test-Path $zip) { Remove-Item $zip -Force }
Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zip -CompressionLevel Optimal
$sha = (Get-FileHash $zip -Algorithm SHA256).Hash.ToLower()
Write-Host "NoAutoGreet $version"
Write-Host "  $zip"
Write-Host "  sha256 $sha"
