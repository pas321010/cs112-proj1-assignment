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
