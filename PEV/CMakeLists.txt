cmake_minimum_required(VERSION 3.1)

project(COP)

add_library(
message STATIC
header.h
message.cpp)

add_executable(COP Source.cpp)

target_link_libraries(COP PRIVATE message)