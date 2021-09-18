#ifndef PROC_C_1_RND_H_
#define PROC_C_1_RND_H_

#include <stdlib.h>
#include <time.h>

inline int Rand(int lowerLimit, int upperLimit) {
    srand(time(0));
    return (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;
}

#endif //PROC_C_1_RND_H_