cmake_minimum_required(VERSION 3.21)

# vcpkg libraries linked INTO the dll: the dynamic default made a plugin import fmt.dll,
# spdlog.dll and Zydis.dll, which no game folder has (Rapport on AE, 2026-09-26). Set before
# project(), where the vcpkg toolchain reads it.
set(VCPKG_TARGET_TRIPLET "x64-windows-static-md" CACHE STRING "")

project(
	NoAutoGreet
	VERSION 0.2.0
	LANGUAGES CXX
)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL" CACHE STRING "")
set(BUILD_TESTS OFF CACHE BOOL "" FORCE)

# No build machine's folders in the dll: __FILE__ paths trimmed before CommonLibF4 is added.
if(MSVC)
	file(TO_NATIVE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/" NAG_TRIM_PREFIX)
	add_compile_options("/d1trimfile:${NAG_TRIM_PREFIX}")
endif()

# One build for 1.10.163, next-gen 1.10.984 and the Anniversary Edition 1.11.x: addresses
# resolved at run time through Runtime Database (f4rd-runtime.bin).
add_subdirectory("extern/CommonLibF4RD/CommonLibF4" "CommonLibF4")

add_library("${PROJECT_NAME}" SHARED "src/PCH.h" "src/main.cpp")
target_compile_features("${PROJECT_NAME}" PRIVATE cxx_std_23)
target_compile_definitions(
	"${PROJECT_NAME}"
	PRIVATE
		"NAG_PROJECT_NAME=\"${PROJECT_NAME}\""
		"NAG_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}"
		"NAG_VERSION_MINOR=${PROJECT_VERSION_MINOR}"
		"NAG_VERSION_PATCH=${PROJECT_VERSION_PATCH}"
		"NAG_VERSION_STRING=\"${PROJECT_VERSION}\""
)
target_include_directories("${PROJECT_NAME}" PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries("${PROJECT_NAME}" PRIVATE CommonLibF4::CommonLibF4)
target_precompile_headers("${PROJECT_NAME}" PRIVATE "src/PCH.h")
if(MSVC)
	target_compile_options("${PROJECT_NAME}" PRIVATE "/permissive-" "/Zc:preprocessor" "/utf-8")
endif()
