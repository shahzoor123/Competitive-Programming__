@echo off

echo ===== Saving Local Changes =====
git stash

echo.
echo ===== Pulling Latest Changes =====
git pull origin master

echo.
echo ===== Restoring Local Changes =====
git stash pop

echo.
echo ✅ Pull Complete!
pause
