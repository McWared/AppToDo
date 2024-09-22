cmake_minimum_required(VERSION 3.10)

project(App VERSION 1.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(AppConfig.h.in AppConfig.h)

add_executable(App main.cpp)

target_include_directories(App PUBLIC "${PROJECT_BINARY_DIR}")
