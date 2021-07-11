add_library(module STATIC)

target_sources(module 
    PRIVATE
        module.cpp
    PUBLIC
        module.hpp
)

target_include_directories(module
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

add_subdirectory(test)
