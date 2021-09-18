#include "transport.h"

#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

int PlaneIn(plane_st* plane, FILE *ifstream) {
    char *end;
    char *num_strs[4];
    char line[MAX_LINE_LENGTH];

    if (fgets(line, MAX_LINE_LENGTH, ifstream) == NULL) {
        return -1;
    }

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    if (cntr != 4)  {
        fprintf(stderr, "INCORRECT ARGUMENT NUMBER");
        exit(EXIT_FAILURE);
    }

    int values[4];
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(num_strs[i], &end, 10);
    }

    plane->base->speed = values[0];
    plane->base->dest_distance = values[1];
    plane->max_distance = values[2];
    plane->capacity = values[3];

    return 0;
}

plane_st *PlaneInRand() {
    plane_st *plane = malloc(sizeof(plane_st));
    plane->capacity = RandInt(100, 300);
    plane->max_distance = RandInt(2000, 4000);
    return plane;
}

void PlaneOut(const plane_st *plane, FILE *ofstream) {
    fprintf(ofstream,
            "This is a plane. Speed: %d, distance to destination: %f, "
             "maximum flight distance: %d, capacity: %d, time to destination: %f\n",
             plane->base->speed, plane->base->dest_distance,
             plane->max_distance, plane->capacity, TimeToDest(plane->base));
}
