cmake_minimum_required(VERSION 3.16)

project(minimizacion-de-AFDs)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES "src/*")

add_executable(minimizacion-de-AFDs ${SOURCES})