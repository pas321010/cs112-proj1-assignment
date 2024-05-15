#define CATCH_CONFIG_MAIN
#include <iostream>

#include "catch.hpp"
#include "primes.h"
#include "utils.h"
using namespace std;

TEST_CASE("step1") {
    REQUIRE(constrain(1.0, 2.0, 3.0) == 2.0);
}

TEST_CASE("step2") {
    // REQUIRE(constrain2(2.0) == 2.0);
}

TEST_CASE("step3") {
}

TEST_CASE("step4") {
}
