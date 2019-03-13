cmake_minimum_required(VERSION 3.13)
project(c_pointer_exercises)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_pointer_exercises
        array_of_pointers.c
        CMakeLists.txt
        global_array.c
        linked_list.c
        local_array.c
        main.c
        monolithic_array.c
        README.md)
