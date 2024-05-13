cmake_minimum_required(VERSION 3.10)
project(calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(calculator src/main.c src/lib/calculatrice.c)
