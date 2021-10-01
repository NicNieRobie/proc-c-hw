/*-------------------------------- plane.c --------------------------------
 * Plane data type functionality definition.
 *-------------------------------------------------------------------------*/

#include "transport.h"
#include "timer.h"

//-------------------------------------------------------------------------
/// Initializes the plane_st object with arguments from input file stream.
/// @param plane Pointer to the object being initialized.
/// @param ifstream Input file stream.
void PlaneIn(plane_st* plane, FILE *ifstream) {
    int *values = ReadArgsFromLine(2, ifstream);

    if (values == NULL) {
        fprintf(stderr, "COULD NOT READ TRANSPORT DATA");
        PrintRuntimeDuration();
        exit(EXIT_FAILURE);
    }

    plane->max_distance = values[0];
    plane->capacity = values[1];
}

//-------------------------------------------------------------------------
/// Returns the pointer to plane_st object initialized with random values.
plane_st *PlaneInRand() {
    plane_st *plane = malloc(sizeof(plane_st));
    plane->capacity = RandInt(100, 300);
    plane->max_distance = RandInt(2000, 4000);
    return plane;
}

//-------------------------------------------------------------------------
/// Prints a description of the plane_st object to output file stream.
/// @param plane Pointer to the object being described.
/// @param ofstream Output file stream.
void PlaneOut(const plane_st *plane, FILE *ofstream) {
    fprintf(ofstream,
            "maximum flight distance: %d, capacity: %d\n",
             plane->max_distance, plane->capacity);
}
