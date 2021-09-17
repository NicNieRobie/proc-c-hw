#ifndef PROCC_PLANE_H_
#define PROCC_PLANE_H_

typedef struct plane {
    int max_distance, capacity;
} plane_st;

void PlaneIn(plane_st *plane, const FILE *ifstream);

void PlaneOut(const plane_st *plane, const double timeToDest, const FILE *ofstream);

#endif