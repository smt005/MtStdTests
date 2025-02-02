@echo off
:: Перейти в директорию, где находится BAT-файл
cd /d %~dp0

:: Создать папку build, если её нет
if not exist build mkdir build

:: Перейти в папку build
cd build

:: Генерация проекта для Visual Studio
cmake -G "Visual Studio 17 2022" -A x64 ..

:: Открыть сгенерированный проект в Visual Studio
if exist "MyStlTests.sln" (
    start MyStlTests.sln
) else (
    echo Failed to generate solution file!
)
