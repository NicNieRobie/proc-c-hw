#include "transport.h"
#include "rnd.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_LINE_LENGTH 80

plane_st *PlaneIn(FILE *ifstream) {
    plane_st *plane = malloc(sizeof(plane_st));

    char *end;
    char *num_strs[4];
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, ifstream);

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    assert(cntr == 4);

    int values[4];
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(&word_ptr[i], &end, 10);
    }

    plane->base->speed = values[0];
    plane->base->dest_distance = values[1];
    plane->max_distance = values[2];
    plane->capacity = values[3];

    return plane;
}

plane_st *PlaneInRand() {
    plane_st *plane = malloc(sizeof(plane_st));
    plane->capacity = Rand(100, 300);
    plane->max_distance = Rand(2000, 4000);
    return plane;
}

void PlaneOut(const plane_st *plane, FILE *ofstream) {
    char output_buf[256];

    snprintf(output_buf, sizeof output_buf,
             "This is a plane. Speed: %d, distance to destination: %f, "
             "maximum flight distance: %d, capacity: %d, time to destination: %f\n",
             plane->base->speed, plane->base->dest_distance,
             plane->max_distance, plane->capacity, TimeToDest(plane->base));

    fputs(output_buf, ofstream);
}
