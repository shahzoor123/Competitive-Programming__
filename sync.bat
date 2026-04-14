@echo off
set /p msg=Enter commit message: 

if "%msg%"=="" (
    echo Commit message cannot be empty!
    pause
    exit /b
)

git add .

git commit -m "%msg%"

git push origin main

echo.
echo ===== Push Complete =====
pause