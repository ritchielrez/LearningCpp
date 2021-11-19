cmake_minimum_required(VERSION 3.0)

#set(CMAKE_PREFIX_PATH "/home/ritux/dev/vcpkg/installed/x64-linux/share")
set(CMAKE_TOOLCHAIN_FILE "/home/ritux/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")
set(EXECUTABLE_OUTPUT_PATH ./bin)

project(LearningCpp)

add_subdirectory(src)


