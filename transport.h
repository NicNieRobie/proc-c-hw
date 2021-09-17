#ifndef PROCC_TRANSPORT_H_
#define PROCC_TRANSPORT_H_

#include "stdio.h"

#include "plane.h"
#include "ship.h"
#include "train.h"

typedef struct transport {
    enum transport_type_et {PLANE, SHIP, TRAIN} transport_type;
    int speed;
    double dest_distance;
    union {
        plane_st p;
        ship_st s;
        train_st t;
    };
} transport_st;

transport_st *TransportIn(const FILE *ifstream);

void TransportOut(const transport_st *tr, const FILE *ofstream);

double TimeToDest(const transport_st *tr);

#endif