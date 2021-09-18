#ifndef PROC_C_1_SHIP_H_
#define PROC_C_1_SHIP_H_

#include <stdio.h>

typedef struct transport transport_st;

typedef struct {
    transport_st *base;
    enum shipType {LINER = 1, TUGBOAT, TANKER} st;
    int displacement;
} ship_st;

int ShipIn(ship_st *ship, FILE *ifstream);
ship_st *ShipInRand();
void ShipOut(const ship_st *ship, FILE *ofstream);

#endif //PROC_C_1_SHIP_H_