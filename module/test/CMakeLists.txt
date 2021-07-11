add_executable(simple_test)
target_sources(simple_test PRIVATE test.cpp)
add_test(NAME simple_test COMMAND simple_test)
target_link_libraries(simple_test 
    PRIVATE 
        doctest::doctest
        module
)