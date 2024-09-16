#include "utils.h"

#include <iostream>
using namespace std;

double constrain(double value, double low, double high) {
    if (value >= high) {
        return high;
    } else if (value <= low) {
        return low;
    } else {
        return value;
    }
}

double constrain2(double value, double low, double high) {
    high = 100.0;
    low = 0.0;
    if (value >= high) {
        return high;
    } else if (value <= low) {
        return low;
    } else {
        return value;
    }
}

bool isPrime(unsigned int value) {
    if (value == 1) {
        return true;
    } else if (value == 2) {
        return false;
    } else if (value % 2 == 0) {
        return false;
    } else {
        return true;
    }
}