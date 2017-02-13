echo ON

set SCONS_MSCOMMON_DEBUG=-
scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --arch=%ARCH% --msvc-version=14.0
if errorlevel neq 0 exit 1

echo OFF