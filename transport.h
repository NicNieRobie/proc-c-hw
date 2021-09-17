#ifndef PROCC_TRANSPORT_H_
#define PROCC_TRANSPORT_H_

#include "stdio.h"

#include "plane.h"
#include "ship.h"
#include "train.h"

struct transport {
    enum transportType {PLANE, SHIP, TRAIN}; 
    enum transportType tp;
    int speed;
    double dest_distance;
    union {
        struct plane p;
        struct ship s;
        struct train t;
    };
};

struct transport *In(const FILE *ifstream);

void *Out(const FILE *ofstream, const struct transport *trans);

double TimeToDest(const struct transport *trans);

#endif