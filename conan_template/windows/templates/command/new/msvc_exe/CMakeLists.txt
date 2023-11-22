cmake_minimum_required(VERSION 3.27)
project({{ name }} CXX)

add_executable({{ name }} src/{{ name }}.cpp src/main.cpp)

install(TARGETS {{ name }})
