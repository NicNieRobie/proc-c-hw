#include <stdlib.h>
#include <time.h>

int RandInt(int lowerLimit, int upperLimit) {
    return (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;
}