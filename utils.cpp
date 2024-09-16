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

double constrain2(double value, double low, double high){
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