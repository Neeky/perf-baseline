#!/usr/bin/env bash

rm -rf build 
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=/usr/local/vcpkg/scripts/buildsystems/vcpkg.cmake && cmake --build build