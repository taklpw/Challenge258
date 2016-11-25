cmake_minimum_required(VERSION 3.6)
project(Challenge258)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES src/main.c src/stringInput.c src/removeVowels.c src/onlyVowels.c)
add_executable(Challenge258 ${SOURCE_FILES})