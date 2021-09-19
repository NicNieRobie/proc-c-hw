#ifndef PROC_C_1_TRAIN_H_
#define PROC_C_1_TRAIN_H_

#include <stdio.h>

typedef struct transport transport_st;

typedef struct {
    int car_amount;
} train_st;

void TrainIn(train_st *train, FILE *ifstream);
train_st *TrainInRand();
void TrainOut(const train_st *train, FILE *ofstream);

#endif //PROC_C_1_TRAIN_H_