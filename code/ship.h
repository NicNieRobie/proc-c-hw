#ifndef PROC_C_1_SHIP_H_
#define PROC_C_1_SHIP_H_

/*-------------------------------- ship.h ---------------------------------
 * Ship data type definition and functionality declaration.
 *-------------------------------------------------------------------------*/

#include <stdio.h>

typedef struct transport transport_st;

//---------------------------- type definition ----------------------------
typedef struct {
    enum ship_type {LINER = 1, TUGBOAT, TANKER} st;
    int displacement;
} ship_st;

//-------------------------- type functionality ---------------------------
/// Initializes the ship_st object with arguments from input file stream.
/// @param ship Pointer to the object being initialized.
/// @param ifstream Input file stream.
void ShipIn(ship_st *ship, FILE *ifstream);

/// Returns the pointer to ship_st object initialized with random values.
ship_st *ShipInRand();

/// Prints a description of the ship_st object to output file stream.
/// @param ship Pointer to the object being described.
/// @param ofstream Output file stream.
void ShipOut(const ship_st *ship, FILE *ofstream);

#endif //PROC_C_1_SHIP_H_