#ifndef PROC_C_1_PLANE_H_
#define PROC_C_1_PLANE_H_

#include <stdio.h>

typedef struct transport transport_st;

typedef struct {
    transport_st *base;
    int max_distance, capacity;
} plane_st;

plane_st *PlaneIn(FILE *ifstream);
plane_st *PlaneInRand();
void PlaneOut(const plane_st *plane, FILE *ofstream);

#endif //PROC_C_1_PLANE_H_