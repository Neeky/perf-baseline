cmake_minimum_required(VERSION 3.27.1)
project(perf-baseline VERSION 0.1.0 LANGUAGES CXX)

# 依赖声明
find_package(fmt CONFIG REQUIRED)
find_package(argparse CONFIG REQUIRED)

# pfbl(perf-baseline)
add_executable(pfbl src/main.cpp)
target_include_directories(pfbl PRIVATE src)
target_link_libraries(pfbl PRIVATE fmt::fmt)
target_link_libraries(pfbl PRIVATE argparse::argparse)

