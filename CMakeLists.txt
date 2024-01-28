cmake_minimum_required(VERSION 3.0.0)
project(perf-baseline VERSION 0.1.0 LANGUAGES C CXX)

message("== install prefix ${CMAKE_INSTALL_PREFIX}")

add_subdirectory(src/cpus)
add_executable(perf-baseline main.cpp)



