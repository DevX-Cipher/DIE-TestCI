@echo off
setlocal

REM Set your Visual Studio generator
set GENERATOR="Visual Studio 17 2022"

REM Create build folder if it doesn't exist
if not exist build (
    mkdir build
)

cd build

REM Generate the Visual Studio .sln and .vcxproj files
cmake .. -G %GENERATOR%

if errorlevel 1 (
    echo  CMake generation failed.
    exit /b 1
)

echo.
echo  Open the .sln file in Visual Studio to build.
pause
