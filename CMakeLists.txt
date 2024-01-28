cmake_minimum_required(VERSION 3.0.0)
project(perf-baseline VERSION 0.1.0 LANGUAGES C CXX)

# include(CTest)
# enable_testing()
add_subdirectory(src/cpus)

add_executable(perf-baseline main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
