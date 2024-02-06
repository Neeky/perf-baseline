cmake_minimum_required(VERSION 3.27.1)
project(perf-baseline VERSION 0.1.0 LANGUAGES CXX)

message("== start build perf-baseline")
message("== cmake system name ${CMAKE_SYSTEM_NAME}")
message("== cmake system processor ${CMAKE_SYSTEM_PROCESSOR}")
message("== install prefix ${CMAKE_INSTALL_PREFIX}")

find_package(fmt CONFIG REQUIRED)
find_package(argparse CONFIG REQUIRED)

add_subdirectory(src/cpus)
add_executable(perf-baseline src/main.cpp)
target_link_libraries(perf-baseline PRIVATE fmt::fmt)
target_link_libraries(perf-baseline PRIVATE argparse::argparse)



