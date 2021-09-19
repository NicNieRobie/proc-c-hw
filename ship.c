#include "transport.h"

#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

int ShipIn(ship_st *ship, FILE *ifstream) {
    char *end;
    char *num_strs[4];
    char line[MAX_LINE_LENGTH];

    if (fgets(line, MAX_LINE_LENGTH, ifstream) == NULL) {
        return -1;
    }

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    if (cntr != 4) {
        fprintf(stderr, "INCORRECT ARGUMENT NUMBER");
        exit(EXIT_FAILURE);
    }

    int values[4];
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(num_strs[i], &end, 10);
    }

    if (values[2] < 1 || values[2] > 3) {
        fprintf(stderr, "INCORRECT SHIP TYPE");
        exit(EXIT_FAILURE);
    }

    ship->base->speed = values[0];
    ship->base->dest_distance = values[1];
    ship->st = values[2];
    ship->displacement = values[3];

    return 0;
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

    fprintf(ofstream,
             "This is a ship. Speed: %d, distance to destination: %f, "
             "ship type: %s, displacement: %d, time to destination: %f\n",
             ship->base->speed, ship->base->dest_distance,
             shipType, ship->displacement, TimeToDest(ship->base));
}
