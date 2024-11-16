cmake_minimum_required(VERSION 3.0)

project(tema2)

set(CMAKE_CXX_STANDARD 14)	 
# we request C++14

set(CMAKE_CXX_STANDARD_REQUIRED ON)	
# we request that CMake verifies the compiler

set(CMAKE_CXX_EXTENSIONS OFF)	 
# we request -std=c++14 in the compiler  flags instead of –std=gnu++14

add_executable(${PROJECT_NAME} main.cpp item4.cpp item4.hpp item5.cpp item5.hpp item6.cpp item6.hpp)	
#we can add headers into the executable definition