#ifndef PROC_C_1_PLANE_H_
#define PROC_C_1_PLANE_H_

#include <stdio.h>

typedef struct transport transport_st;

typedef struct {
    int max_distance, capacity;
} plane_st;

void PlaneIn(plane_st *plane, FILE *ifstream);
plane_st *PlaneInRand();
void PlaneOut(const plane_st *plane, FILE *ofstream);

#endif //PROC_C_1_PLANE_H_