cmake_minimum_required(VERSION 3.0)

add_executable(main main.cpp)

include_directories(../include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(main PRIVATE fmt::fmt)
