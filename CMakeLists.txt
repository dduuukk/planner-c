cmake_minimum_required(VERSION 3.28)

set(TARGET plannerC)

project(${TARGET}
    DESCRIPTION "Auto planner with C backend"
    LANGUAGES CXX
    )
    
# Automatically find all source files in the src directory
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(${TARGET} ${SOURCES})

# # Find all directories in src and include them
# file(GLOB_RECURSE HEADER_DIRS ${CMAKE_SOURCE_DIR}/src/*)
# list(FILTER HEADER_DIRS INCLUDE REGEX ".*/")

target_include_directories(${TARGET} PRIVATE ${HEADER_DIRS})

target_compile_options(${TARGET} PRIVATE -Wall -Wextra -Wpedantic)

