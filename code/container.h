#ifndef PROC_C_1_CONTAINER_H_
#define PROC_C_1_CONTAINER_H_

/*------------------------------ container.h ------------------------------
 * Basic data type acting as a container for the transport_st data type.
 *-------------------------------------------------------------------------*/

#include "transport.h"

//---------------------------- type definition ----------------------------
/// Basic container data type holding an array of a fixed size (10000).
typedef struct {
    enum {MAX_SIZE = 10000};
    transport_st *data[MAX_SIZE];
    unsigned int count;
} container_st;

//-------------------------- type functionality ---------------------------
/// Initializes the container.
/// @param cont The container.
void Initialize(container_st *cont);

/// Appends transport_st object to container.
/// @param cont The container.
/// @param tr The object to be appended.
int Append(container_st *cont, transport_st* tr);

/// Removes object at the given index from container.
/// @param cont The container.
/// @param index Index of an object to be removed.
int RemoveAt(container_st *cont, int index);

/// Clears the container.
/// @param cont The container to be cleared.
void Clear(container_st *cont);

/// Fills the container with input from the file stream.
/// @param cont The container to be filled.
/// @param ifstream Input file stream.
void In(container_st *cont, FILE *ifstream);

/// Fills the container with a specified amount
///   of randomly generated items.
/// @param cont The container to be filled.
/// @param count Amount of items to be generated.
void InRand(container_st *cont, unsigned int count);

/// Prints the container content to the file stream.
/// @param cont The container.
/// @param ofstream Output file stream.
void Out(container_st *cont, FILE *ofstream);

/// Deletes all items with a TimeToDest value less than average
///   from container.
/// @param cont The container.
void DeleteLessThanAverage(container_st *cont);

#endif // PROC_C_1_CONTAINER_H_