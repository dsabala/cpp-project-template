cmake_minimum_required (VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(cpp-project-template CXX)

include(CTest)
enable_testing()

add_subdirectory(cpp-project-template)
add_subdirectory(module)
add_subdirectory(third-party)
