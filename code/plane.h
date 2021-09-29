#ifndef PROC_C_1_PLANE_H_
#define PROC_C_1_PLANE_H_

/*-------------------------------- plane.h --------------------------------
 * Plane data type definition and functionality declaration.
 *-------------------------------------------------------------------------*/

#include <stdio.h>

typedef struct transport transport_st;

//---------------------------- type definition ----------------------------
typedef struct {
    int max_distance, capacity;
} plane_st;

//-------------------------- type functionality ---------------------------
/// Initializes the plane_st object with arguments from input file stream.
/// @param plane Pointer to the object being initialized.
/// @param ifstream Input file stream.
void PlaneIn(plane_st *plane, FILE *ifstream);

/// Returns the pointer to plane_st object initialized with random values.
plane_st *PlaneInRand();

/// Prints a description of the plane_st object to output file stream.
/// @param plane Pointer to the object being described.
/// @param ofstream Output file stream.
void PlaneOut(const plane_st *plane, FILE *ofstream);

#endif //PROC_C_1_PLANE_H_