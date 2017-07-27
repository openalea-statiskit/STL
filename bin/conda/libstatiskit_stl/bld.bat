echo ON

if "%ARCH%" == "32" (
    set PROCESSOR_ARCHITECTURE="x86"
) else (
    set PROCESSOR_ARCHITECTURE="x64"
)


scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --arch=%ARCH%
if errorlevel 1 exit 1

echo OFF