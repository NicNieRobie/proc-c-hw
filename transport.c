#include "transport.h"

#include <stdlib.h>

#define MAX_LINE_LENGTH 80

transport_st *In(FILE *ifstream) {
    transport_st *tr;

    char *end;
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, ifstream);
    long key = strtol(line, &end, 10);

    switch (key) {
        case 1:
            tr = malloc(sizeof(transport_st));
            tr->transport_type = PLANE;
            PlaneIn(&tr->p, ifstream);
            break;
        case 2:
            tr = malloc(sizeof(transport_st));
            tr->transport_type = SHIP;
            ShipIn(&tr->s, ifstream);
            break;
        case 3:
            tr = malloc(sizeof(transport_st));
            tr->transport_type = TRAIN;
            TrainIn(&tr->t, ifstream);
            break;
        default:
            return(0);
    }

    return tr;
}

void *Out(const transport_st *tr, const FILE *ofstream) {
    switch (tr->transport_type) {
        case PLANE:
            PlaneOut(&tr->p, TimeToDest(tr), ofstream);
            break;
        case SHIP:
            ShipOut(&tr->s, TimeToDest(tr), ofstream);
            break;
        case TRAIN:
            TrainOut(&tr->t, TimeToDest(tr), ofstream);
            break;
    }
}

double TimeToDest(const transport_st *tr) {
    return tr->dest_distance / tr->speed;
}