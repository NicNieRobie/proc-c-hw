#ifndef PROC_C_1_TRANSPORT_H_
#define PROC_C_1_TRANSPORT_H_

/*------------------------------ transport.h ------------------------------
 * Generalized transport data type definition and functionality declaration.
 *-------------------------------------------------------------------------*/

#include "plane.h"
#include "ship.h"
#include "train.h"
#include "rnd.h"
#include "file_read.h"

//---------------------------- type definition ----------------------------
typedef struct transport {
    // Transport type key.
    enum transport_type_et {PLANE = 1, SHIP, TRAIN} transport_type;
    int speed;
    double dest_distance;
    // Union holding references to sub-types.
    union {
        plane_st p;
        ship_st s;
        train_st t;
    };
} transport_st;

//-------------------------- type functionality ---------------------------
/// Returns a pointer to the transport_st object initialized with values
///   read from input file stream.
/// @param ifstream Input file stream.
transport_st *TransportIn(FILE *ifstream);

/// Returns a pointer to the transport_st object initialized with randomly
///   generated values.
transport_st *TransportInRand();

/// Prints a description of the given transport_st object to the output
///   file stream.
/// @param tr Object being described.
/// @param ofstream Input file stream.
void TransportOut(const transport_st *tr, FILE *ofstream);

/// Returns the time needed for the transport to reach the destination.
/// @param tr The transport object.
double TimeToDest(const transport_st *tr);

#endif //PROC_C_1_TRANSPORT_H_