#include "transport.h"

void PlaneIn(plane_st* plane, FILE *ifstream) {
    int *values = ReadArgsFromLine(2, ifstream);

    if (values == NULL) {
        fprintf(stderr, "COULD NOT READ TRANSPORT DATA");
        exit(EXIT_FAILURE);
    }

    plane->max_distance = values[0];
    plane->capacity = values[1];
}

plane_st *PlaneInRand() {
    plane_st *plane = malloc(sizeof(plane_st));
    plane->capacity = RandInt(100, 300);
    plane->max_distance = RandInt(2000, 4000);
    return plane;
}

void PlaneOut(const plane_st *plane, FILE *ofstream) {
    fprintf(ofstream,
            "maximum flight distance: %d, capacity: %d\n",
             plane->max_distance, plane->capacity);
}
