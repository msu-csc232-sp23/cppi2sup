cmake_minimum_required(VERSION 3.24)
project(cppi2sup)

set(CMAKE_CXX_STANDARD 14)

if (CMAKE_VERSION GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

add_executable(cppi2sup main.cpp GreatDaehn.cpp Yorkie.cpp)
add_executable(dog-test dog-test.cpp GreatDaehn.cpp Yorkie.cpp)

enable_testing()
add_test(NAME DogTest COMMAND dog-test)
