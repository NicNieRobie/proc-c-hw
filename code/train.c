/*-------------------------------- train.c --------------------------------
 * Train data type functionality definition.
 *-------------------------------------------------------------------------*/

#include "transport.h"

//-------------------------------------------------------------------------
/// Initializes the train_st object with arguments from input file stream.
/// @param train Pointer to the object being initialized.
/// @param ifstream Input file stream.
void TrainIn(train_st* train, FILE *ifstream) {
    int *values = ReadArgsFromLine(1, ifstream);

    if (values == NULL) {
        fprintf(stderr, "COULD NOT READ TRANSPORT DATA");
        exit(EXIT_FAILURE);
    }

    train->car_amount = values[1];
}

//-------------------------------------------------------------------------
/// Returns the pointer to train_st object initialized with random values.
train_st *TrainInRand() {
    train_st *train = malloc(sizeof(train_st));
    train->car_amount = RandInt(1, 20);
    return train;
}

//-------------------------------------------------------------------------
/// Prints a description of the train_st object to output file stream.
/// @param train Pointer to the object being described.
/// @param ofstream Output file stream.
void TrainOut(const train_st *train, FILE *ofstream) {
    fprintf(ofstream, "amount of cars: %d\n", train->car_amount);
}
