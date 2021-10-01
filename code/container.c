/*------------------------------ container.c ------------------------------
 * Basic container data type functionality.
 *-------------------------------------------------------------------------*/

#include <stdlib.h>

#include "container.h"
#include "string.h"
#include "timer.h"

//-------------------------------------------------------------------------
/// Initializes the container.
/// @param cont The container.
void Initialize(container_st *cont) {
    cont->count = 0;
}

//-------------------------------------------------------------------------
/// Appends transport_st object to container.
/// @param cont The container.
/// @param tr The object to be appended.
int Append(container_st *cont, transport_st* tr) {
    if (cont->count < 10000) {
        cont->data[cont->count] = tr;
        cont->count++;
        return 0;
    } else {
        return -1;
    }
}

//-------------------------------------------------------------------------
/// Removes object at the given index from container.
/// @param cont The container.
/// @param index Index of an object to be removed.
int RemoveAt(container_st *cont, int index) {
    if (index < 0 || index > cont->count) return -1;

    if (index < cont->count - 1) {
        for (int i = 0; i < cont->count; i++) {
            if (i >= index && i != cont->count - 1) {
                cont->data[i] = cont->data[i+1];
            }
        }
    }

    cont->data[cont->count - 1] = NULL;
    cont->count--;
    return 0;
}

//-------------------------------------------------------------------------
/// Clears the container.
/// @param cont The container to be cleared.
void Clear(container_st *cont) {
    for (int i = 0; i < cont->count; i++) {
        cont->data[i] = NULL;
    }
    cont->count = 0;
}

//-------------------------------------------------------------------------
/// Fills the container with input from the file stream.
/// @param cont The container to be filled.
/// @param ifstream Input file stream.
void In(container_st *cont, FILE *ifstream) {
    transport_st *tr;
    while((tr = TransportIn(ifstream)) != NULL) {
        Append(cont, tr);
    }
}

//-------------------------------------------------------------------------
/// Fills the container with a specified amount
///   of randomly generated items.
/// @param cont The container to be filled.
/// @param count Amount of items to be generated.
void InRand(container_st *cont, unsigned int count) {
    while(cont->count < count) {
        Append(cont, TransportInRand());
    }
}

//-------------------------------------------------------------------------
/// Prints the container content to the file stream.
/// @param cont The container.
/// @param ofstream Output file stream.
void Out(container_st *cont, FILE *ofstream) {
    if(!ofstream) {
        perror("could not write to file");
        // Measuring the runtime.
        end_time = clock();
        float seconds = (float)(end_time - start_time) / CLOCKS_PER_SEC;

        fprintf(stdout, "Stop at %.9g secs", seconds);
        exit(EXIT_FAILURE);
    }

    fprintf(ofstream, "Container contains %d elements.\n", cont->count);
    for(int i = 0; i < cont->count; i++) {
        fprintf(ofstream, "%d: ", i + 1);
        TransportOut(cont->data[i], ofstream);
    }
}

//-------------------------------------------------------------------------
/// Deletes all items with a TimeToDest value less than average
///   from container.
/// @param cont The container.
void DeleteLessThanAverage(container_st *cont) {
    double sum = 0;
    for (int i = 0; i < cont->count; i++) {
        sum += TimeToDest(cont->data[i]);
    }

    double avg = sum / cont->count;

    for (int i = 0; i < cont->count; i++) {
        if (TimeToDest(cont->data[i]) < avg) {
            RemoveAt(cont, i);
            i--;
        }
    }
}