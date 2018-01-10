echo ON

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
if errorlevel neq 0 exit 1

echo OFF
