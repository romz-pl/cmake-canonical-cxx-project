cmake_minimum_required(VERSION 3.21)
project(canonical CXX)

include(CTest)
find_package(GTest REQUIRED)
include(GoogleTest)

find_package(OpenSSL REQUIRED COMPONENTS SSL)

add_subdirectory(apps)
add_subdirectory(libs)
