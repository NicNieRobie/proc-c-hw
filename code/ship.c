#include "transport.h"

void ShipIn(ship_st *ship, FILE *ifstream) {
    int *values = ReadArgsFromLine(2, ifstream);

    if (values == NULL) {
        fprintf(stderr, "COULD NOT READ TRANSPORT DATA");
        exit(EXIT_FAILURE);
    }

    if (values[0] < 1 || values[0] > 3) {
        fprintf(stderr, "INCORRECT SHIP TYPE");
        exit(EXIT_FAILURE);
    }

    ship->st = values[0];
    ship->displacement = values[1];
}

ship_st *ShipInRand() {
    ship_st *ship = malloc(sizeof(ship_st));
    ship->st = RandInt(1, 3);
    ship->displacement = RandInt(1000, 65000);
    return ship;
}

void ShipOut(const ship_st *ship, FILE *ofstream) {
    char* shipType = NULL;

    switch (ship->st) {
        case LINER:
            shipType = "liner";
            break;
        case TUGBOAT:
            shipType = "tugboat";
            break;
        case TANKER:
            shipType = "tanker";
            break;
    }

    fprintf(ofstream, "ship type: %s, displacement: %d\n", shipType, ship->displacement);
}
