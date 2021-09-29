#include "transport.h"

void TrainIn(train_st* train, FILE *ifstream) {
    int *values = ReadArgsFromLine(1, ifstream);

    if (values == NULL) {
        fprintf(stderr, "COULD NOT READ TRANSPORT DATA");
        exit(EXIT_FAILURE);
    }

    train->car_amount = values[1];
}

train_st *TrainInRand() {
    train_st *train = malloc(sizeof(train_st));
    train->car_amount = RandInt(1, 20);
    return train;
}

void TrainOut(const train_st *train, FILE *ofstream) {
    fprintf(ofstream, "amount of cars: %d\n", train->car_amount);
}
