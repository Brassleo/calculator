cmake_minimum_required(VERSION 3.23)
project(calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(calculator main.cpp arithmeticAndLogicOperators.cpp arithmeticAndLogicOperators.h mathFunctions.cpp mathFunctions.h)
