add_executable(cpp-project-template)

target_sources(cpp-project-template
    PRIVATE
        main.cpp
)

target_link_libraries(cpp-project-template
    PRIVATE
        module
)
