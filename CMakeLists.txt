cmake_minimum_required(VERSION 3.14)
project(buddy2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(buddy2
        buddy2.c
        buddy2.h
        buddy2_test.c)
