#ifndef PROC_C_1_TRAIN_H_
#define PROC_C_1_TRAIN_H_

/*-------------------------------- train.h --------------------------------
 * Train data type definition and functionality declaration.
 *-------------------------------------------------------------------------*/

#include <stdio.h>

typedef struct transport transport_st;

//---------------------------- type definition ----------------------------
typedef struct {
    int car_amount;
} train_st;

//-------------------------- type functionality ---------------------------
/// Initializes the train_st object with arguments from input file stream.
/// @param train Pointer to the object being initialized.
/// @param ifstream Input file stream.
void TrainIn(train_st *train, FILE *ifstream);

/// Returns the pointer to train_st object initialized with random values.
train_st *TrainInRand();

/// Prints a description of the train_st object to output file stream.
/// @param train Pointer to the object being described.
/// @param ofstream Output file stream.
void TrainOut(const train_st *train, FILE *ofstream);

#endif //PROC_C_1_TRAIN_H_