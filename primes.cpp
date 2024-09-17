#include "primes.h"
#include <iostream>
#include "utils.h"
using namespace std;

void findNPrimes(unsigned int primes[], unsigned int size)
{
    unsigned int number = 1;
    unsigned int i = 0;
    while (i < size) {
        if (isPrime(i)) {
            primes[i] = number;
            i++;
        }
        number++;
    }
}
