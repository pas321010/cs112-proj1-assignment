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
    REQUIRE(constrain2(2.0) == 2.0);
    REQUIRE(constrain2(-1.5) == 0.0);
    REQUIRE(constrain2(115.0) == 100.0);
}

TEST_CASE("step3") {
    REQUIRE(isPrime(4) == false);
    REQUIRE(isPrime(1) == true);
    REQUIRE(isPrime(12) == false);
    REQUIRE(isPrime(13) == true);
}

TEST_CASE("step4") {
    unsigned int lengthb = 100;
    unsigned primes[lengthb];
    findNPrimes(primes,lengthb);
    REQUIRE(primes[100] == 541);
    
}   
