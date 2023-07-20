cmake_minimum_required(VERSION 3.25)
project(leetcode_c C)

set(CMAKE_C_STANDARD 11)

add_executable(leetcode_c
        basic-review/bubble_sort.c
        basic-review/depth.c
        basic-review/linklist.c
        basic-review/quick_select.c
        basic-review/quick_sort.c)
