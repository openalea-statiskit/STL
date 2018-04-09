echo ON

if "%PY3K%" == "0" (
  3to2 -n -w %SRC_DIR%\src\py\autowig -x next
  3to2 -n -w %SRC_DIR%\test
)

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
if errorlevel neq 0 exit 1

echo OFF
