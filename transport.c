#include "transport.h"

#include <stdlib.h>

#define MAX_LINE_LENGTH 80

transport_st *TransportIn(FILE *ifstream) {
    transport_st *tr;

    char *end;
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, ifstream);
    long key = strtol(line, &end, 10);

    switch (key) {
        case 1:
            tr = malloc(sizeof(transport_st));
            tr->transport_type = PLANE;
            tr->p.base = tr;
            int resP = PlaneIn(&tr->p, ifstream);
            if (resP == -1) return NULL;
            break;
        case 2:
            tr = malloc(sizeof(transport_st));
            tr->transport_type = SHIP;
            tr->s.base = tr;
            int resS = ShipIn(&tr->s, ifstream);
            if (resS == -1) return NULL;
            break;
        case 3:
            tr = malloc(sizeof(transport_st));
            tr->transport_type = TRAIN;
            tr->t.base = tr;
            int resT = TrainIn(&tr->t, ifstream);
            if (resT == -1) return NULL;
            break;
        default:
            return NULL;
    }

    return tr;
}

transport_st *TransportInRand() {
    transport_st *tr = malloc(sizeof(transport_st));
    tr->speed = RandInt(1, 200);
    tr->dest_distance = RandInt(5, 2000);
    tr->transport_type = RandInt(0, 2);

    switch (tr->transport_type) {
        case PLANE:
            tr->p = *PlaneInRand();
            tr->p.base = tr;
            break;
        case SHIP:
            tr->s = *ShipInRand();
            tr->s.base = tr;
            break;
        case TRAIN:
            tr->t = *TrainInRand();
            tr->t.base = tr;
            break;
    }

    return tr;
}

void TransportOut(const transport_st *tr, FILE *ofstream) {
    switch (tr->transport_type) {
        case PLANE:
            PlaneOut(&tr->p, ofstream);
            break;
        case SHIP:
            ShipOut(&tr->s, ofstream);
            break;
        case TRAIN:
            TrainOut(&tr->t, ofstream);
            break;
    }
}

double TimeToDest(const transport_st *tr) {
    return tr->dest_distance / tr->speed;
}