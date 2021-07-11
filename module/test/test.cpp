#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest/doctest.h>
#include "module.hpp"

TEST_CASE("Template test case") {
    CHECK(is_more_than_ten(11));
    CHECK_FALSE(is_more_than_ten(9));
}