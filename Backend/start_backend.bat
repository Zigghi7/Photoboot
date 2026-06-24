@echo off
setlocal

cd /d "%~dp0"

echo ========================================
echo        PHOTOBOOT BACKEND - MOCK
echo ========================================
echo.

if not exist ".venv\Scripts\python.exe" (
    echo ERRORE: ambiente virtuale non trovato.
    echo.
    echo Esegui prima i comandi di installazione indicati.
    echo.
    pause
    exit /b 1
)

call ".venv\Scripts\activate.bat"

echo Avvio backend su:
echo http://127.0.0.1:8000
echo.
echo Documentazione:
echo http://127.0.0.1:8000/docs
echo.
echo Premi CTRL+C per arrestare il backend.
echo.

python -m uvicorn app.main:app ^
    --host 127.0.0.1 ^
    --port 8000 ^
    --reload

set BACKEND_EXIT_CODE=%ERRORLEVEL%

echo.
echo Il backend e' stato arrestato.
echo Codice di uscita: %BACKEND_EXIT_CODE%
echo.

pause
exit /b %BACKEND_EXIT_CODE%