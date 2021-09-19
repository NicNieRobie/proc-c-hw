#ifndef PROC_C_1_TRANSPORT_H_
#define PROC_C_1_TRANSPORT_H_

#include "plane.h"
#include "ship.h"
#include "train.h"
#include "rnd.h"
#include "file_read.h"

typedef struct transport {
    enum transport_type_et {PLANE = 1, SHIP, TRAIN} transport_type;
    int speed;
    double dest_distance;
    union {
        plane_st p;
        ship_st s;
        train_st t;
    };
} transport_st;

transport_st *TransportIn(FILE *ifstream);

transport_st *TransportInRand();

void TransportOut(const transport_st *tr, FILE *ofstream);

double TimeToDest(const transport_st *tr);

#endif //PROC_C_1_TRANSPORT_H_