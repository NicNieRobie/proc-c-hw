#ifndef PROCC_SHIP_H_
#define PROCC_SHIP_H_

typedef struct ship {
    enum shipType {LINER, TUGBOAT, TANKER};
    enum shipType st;
    int displacement;
} ship_st;

void ShipIn(ship_st *ship, const FILE *ifstream);

void ShipOut(const ship_st *ship, const double timeToDest, const FILE *ofstream);

#endif