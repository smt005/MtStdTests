cmake_minimum_required(VERSION 3.20)

# Укажите имя проекта
project(Leetcode LANGUAGES CXX)

# Установите стандарт языка C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Установите платформу x64
set(CMAKE_GENERATOR_PLATFORM x64)

# Укажите папку с исходниками
set(SOURCES_DIR ${CMAKE_SOURCE_DIR}/Sources)

# Рекурсивно добавьте все файлы .cpp и .h из папки Sources
file(GLOB_RECURSE SOURCES
    ${SOURCES_DIR}/*.cpp
    ${SOURCES_DIR}/*.h
)
source_group(TREE ${SOURCES_DIR} TREE PREFIX "" FILES ${SOURCES})

# Добавьте исполняемый файл
add_executable(${PROJECT_NAME} ${SOURCES})

# Укажите путь к папке с заголовочными файлами
include_directories(${SOURCES_DIR})
