cmake_minimum_required(VERSION 3.10)
project(part3)

set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 17)

find_package(termcolor REQUIRED)
include_directories(SYSTEM ${termcolor_INCLUDE_DIRS})

include_directories(source lib)

add_executable(${PROJECT_NAME}
    source/Car.cpp
    source/FuelGauge.cpp
    source/Logger.cpp
    source/main.cpp
)