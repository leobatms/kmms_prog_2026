@echo off
cd /d "%~dp0"
chcp 1251 >nul

if not exist build mkdir build

g++ -std=c++17 -finput-charset=utf-8 -fexec-charset=windows-1251 main.cpp io.cpp sortings.cpp -o "build\multi_sort.exe"
if errorlevel 1 exit /b 1

"build\multi_sort.exe"