cmake_minimum_required(VERSION 3.26)
project(MyCProject C)

set(CMAKE_C_STANDARD 99)

add_executable(MyCProject main.c
        chapter01/01_Hello.c)

add_executable(01_Hello chapter01/01_Hello.c)
add_executable(main main.c)