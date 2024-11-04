cmake_minimum_required(VERSION 3.28)

set(TARGET plannerC)

project(${TARGET}
    DESCRIPTION "Auto planner with C backend"
    LANGUAGES C
    )

add_executable(${TARGET} ${CMAKE_SOURCE_DIR}/src/main.c)

# Find all directories in src and include them
file(GLOB_RECURSE HEADER_DIRS ${CMAKE_SOURCE_DIR}/src/*)
list(FILTER HEADER_DIRS INCLUDE REGEX ".*/")

target_include_directories(${TARGET} PRIVATE ${HEADER_DIRS})

target_compile_options(${TARGET} PRIVATE -Wall -Wextra -Wpedantic)

