#include "transport.h"

#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

transport_st *TransportIn(FILE *ifstream) {
    transport_st *tr;

    int *values = ReadArgsFromLine(3, ifstream);

    if(values == NULL) return NULL;

    if (values[0] < 1 || values[0] > 3) {
        fprintf(stderr, "INCORRECT TRANSPORT TYPE");
        exit(EXIT_FAILURE);
    }

    tr = malloc(sizeof(transport_st));
    tr->transport_type = values[0];
    tr->speed = values[1];
    tr->dest_distance = values[2];

    switch (tr->transport_type) {
        case PLANE:{
            PlaneIn(&tr->p, ifstream);
            break;
        }
        case SHIP: {
            ShipIn(&tr->s, ifstream);
            break;
        }
        case TRAIN: {
            TrainIn(&tr->t, ifstream);
            break;
        }
        default:
            free(tr);
            fprintf(stderr, "INVALID TRANSPORT TYPE");
            exit(EXIT_FAILURE);
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
            break;
        case SHIP:
            tr->s = *ShipInRand();
            break;
        case TRAIN:
            tr->t = *TrainInRand();
            break;
    }

    return tr;
}

void TransportOut(const transport_st *tr, FILE *ofstream) {
    switch (tr->transport_type) {
        case PLANE:
            fprintf(ofstream, "This is a plane. Speed: %d, "
                              "distance to destination: %f, "
                              "time to distance: %f, ",
                              tr->speed, tr->dest_distance, TimeToDest(tr));
            PlaneOut(&tr->p, ofstream);
            break;
        case SHIP:
            fprintf(ofstream, "This is a ship. Speed: %d, "
                              "distance to destination: %f, "
                              "time to distance: %f, ",
                              tr->speed, tr->dest_distance, TimeToDest(tr));
            ShipOut(&tr->s, ofstream);
            break;
        case TRAIN:
            fprintf(ofstream, "This is a train. Speed: %d, "
                              "distance to destination: %f, "
                              "time to distance: %f, ",
                              tr->speed, tr->dest_distance, TimeToDest(tr));
            TrainOut(&tr->t, ofstream);
            break;
    }
}

double TimeToDest(const transport_st *tr) {
    return tr->dest_distance / tr->speed;
}