cmake_minimum_required(VERSION 3.10)
project(ezre C)

set(CMAKE_C_STANDARD 11)
add_executable(ezre ezre.c)

# add project ezre_revenge
project(ezre_revenge C)
set(CMAKE_C_STANDARD 11)
# set -DENABLE_AVX=OFF
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DENABLE_AVX=OFF")

add_executable(ezre_revenge ezre_revenge.c)



