cmake_minimum_required (VERSION 3.0)

set(CXXFLAGS = -std=c++17 -Wconversion -Wall -Werror -Wextra -pedantic -pthread)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
file( GLOB SRC_CH_00 src/Chapters/Ch0/*.cc )
file( GLOB SRC_CH_01 src/Chapters/Ch1/*.cc )
file( GLOB SRC_CH_02 src/Chapters/Ch2/*.cc )
file( GLOB SRC_CH_03 src/Chapters/Ch3/*.cc )
file( GLOB SRC_CH_04 src/Chapters/Ch4/*.cc )
file( GLOB SRC_CH_05 src/Chapters/Ch5/*.cc )
file( GLOB SRC_CH_06 src/Chapters/Ch6/*.cc )
file( GLOB SRC_CH_07 src/Chapters/Ch7/*.cc )
add_library(strstrlib
${SRC_CH_00}
${SRC_CH_01}
${SRC_CH_02}
${SRC_CH_03}
${SRC_CH_04}
${SRC_CH_05}
${SRC_CH_06}
${SRC_CH_07}
)
project (Stroustrup-exs)
include_directories (
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/include/Chapt_headers"
    )
add_executable(strstr main.cc)
target_link_libraries(strstr strstrlib)