#ifndef PROC_C_1_TEST_GENERATION_H_
#define PROC_C_1_TEST_GENERATION_H_

#include <stdio.h>
#include <stdlib.h>

#include "rnd.h"

enum {
    TRAIN_ARGS = 3,
    PLANE_ARGS = 4,
    SHIP_ARGS = 4
};

void GenerateTest(FILE *ofstream);

#endif //PROC_C_1_TEST_GENERATION_H_
