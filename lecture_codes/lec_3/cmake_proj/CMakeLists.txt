# Set project name
project(cmake_test_project)

# Minimum version of the cmake required
cmake_minimum_required(VERSION 3.0)

message(STATUS "Yeah, no shit it works!")

include_directories(${PROJECT_SOURCE_DIR}/src)

# add the src sub directory
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

# Test has to be enabled at the top most Cmake to enable testing
enable_testing()

# unit test directory
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)
