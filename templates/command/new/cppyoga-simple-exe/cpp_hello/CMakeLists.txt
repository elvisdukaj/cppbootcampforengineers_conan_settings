cmake_minimum_required(VERSION 3.26)
project({{ name }} CXX)

find_package(fmt REQUIRED)

add_executable({{ name }} src/main.cpp)

target_link_libraries({{ name}} PRIVATE fmt::fmt)

install(TARGETS {{ name }})
