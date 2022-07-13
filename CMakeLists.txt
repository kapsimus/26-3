cmake_minimum_required(VERSION 3.18)
project(26_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(26_3 src/main.cpp include/window.h include/display.h src/window.cpp src/display.cpp)
target_include_directories(26_3 PUBLIC include)
