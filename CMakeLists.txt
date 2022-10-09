project(data_and_algo)
cmake_minimum_required(VERSION 3.24)


add_executable(main
        lib/lib.cpp
        lib/lib.h
        src/sort.cpp
        src/list.cpp src/stack.cpp)