#ifndef PROCC_PLANE_H_
#define PROCC_PLANE_H_

struct plane {
    int max_distance, capacity;
};

double TimeToDest(const struct plane *p);

#endif