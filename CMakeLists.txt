cmake_minimum_required(VERSION 3.22)
project(Tetris)

set(CMAKE_CXX_STANDARD 20)

set(${PROJECT_NAME}Source main.cpp olcPixelGameEngine.h)
add_executable(${PROJECT_NAME} ${${PROJECT_NAME}Source})
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -O0 -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17)
target_link_libraries(${PROJECT_NAME} PRIVATE user32 gdi32 opengl32 gdiplus Shlwapi dwmapi stdc++fs)