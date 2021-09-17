#ifndef PROCC_TRAIN_H_
#define PROCC_TRAIN_H_

typedef struct train {
    int car_amount;
} train_st;

void TrainIn(train_st *train, const FILE *ifstream);

void TrainOut(const train_st *train, const double timeToDest, const FILE *ofstream);

#endif