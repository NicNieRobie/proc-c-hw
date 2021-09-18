#include "transport.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_LINE_LENGTH 80

int TrainIn(train_st* train, FILE *ifstream) {
    char *end;
    char *num_strs[3];
    char line[MAX_LINE_LENGTH];

    if (fgets(line, MAX_LINE_LENGTH, ifstream) == NULL) {
        return -1;
    }

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    if (cntr != 3)  {
        fprintf(stderr, "INCORRECT ARGUMENT NUMBER");
        exit(EXIT_FAILURE);
    }

    int values[3];
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(num_strs[i], &end, 10);
    }

    train->base->speed = values[0];
    train->base->dest_distance = values[1];
    train->car_amount = values[2];

    return 0;
}

train_st *TrainInRand() {
    train_st *train = malloc(sizeof(train_st));
    train->car_amount = RandInt(1, 20);
    return train;
}

void TrainOut(const train_st *train, FILE *ofstream) {
    fprintf(ofstream,
             "This is a train. Speed: %d, distance to destination: %f, "
             "amount of cars: %d, time to destination: %f\n",
             train->base->speed, train->base->dest_distance,
             train->car_amount, TimeToDest(train->base));
}
