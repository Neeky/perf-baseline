cmake_minimum_required(VERSION 3.0.0)
project(perf-baseline VERSION 0.1.0 LANGUAGES C CXX)

message("== start build perf-baseline")
message("== cmake system name ${CMAKE_SYSTEM_NAME}")
message("== cmake system processor ${CMAKE_SYSTEM_PROCESSOR}")
message("== install prefix ${CMAKE_INSTALL_PREFIX}")

find_package(gflags REQUIRED)

add_subdirectory(src/cpus)
add_executable(perf-baseline main.cpp)
target_link_libraries(perf-baseline gflags)



