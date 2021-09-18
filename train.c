#include "transport.h"
#include "rnd.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_LINE_LENGTH 80

train_st *TrainIn(FILE *ifstream) {
    train_st *train = malloc(sizeof(train_st));

    char *end;
    char *num_strs[3];
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, ifstream);

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    assert(cntr == 3);

    int values[3];
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(&word_ptr[i], &end, 10);
    }

    train->base->speed = values[0];
    train->base->dest_distance = values[1];
    train->car_amount = values[2];

    return train;
}

train_st *TrainInRand() {
    train_st *train = malloc(sizeof(train_st));
    train->car_amount = Rand(1, 20);
    return train;
}

void TrainOut(const train_st *train, FILE *ofstream) {
    char output_buf[256];

    snprintf(output_buf, sizeof output_buf,
             "This is a train. Speed: %d, distance to destination: %f, "
             "amount of cars: %d, time to destination: %f\n",
             train->base->speed, train->base->dest_distance,
             train->car_amount, TimeToDest(train->base));

    fputs(output_buf, ofstream);
}
