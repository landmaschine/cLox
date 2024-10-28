cmake_minimum_required(VERSION 3.10)

project(cLox C)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(BIN_DIR ${CMAKE_SOURCE_DIR}/bin)

include_directories(${INCLUDE_DIR})

file(GLOB SRC_FILES "${SRC_DIR}/*.c")

add_executable(cLox ${SRC_FILES})

set_target_properties(cLox PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
)
