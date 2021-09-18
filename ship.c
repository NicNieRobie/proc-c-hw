#include "transport.h"
#include "rnd.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_LINE_LENGTH 80

ship_st *ShipIn(FILE *ifstream) {
    ship_st *ship = malloc(sizeof(ship_st));

    char *end;
    char *num_strs[4];
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, ifstream);

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    assert(cntr == 4);

    int values[4];
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(&word_ptr[i], &end, 10);
    }

    ship->base->speed = values[0];
    ship->base->dest_distance = values[1];
    ship->st = values[2];
    ship->displacement = values[3];

    return ship;
}

ship_st *ShipInRand() {
    ship_st *ship = malloc(sizeof(ship_st));
    ship->st = Rand(1, 3);
    ship->displacement = Rand(1000, 65000);
    return ship;
}

void ShipOut(const ship_st *ship, FILE *ofstream) {
    char output_buf[256];

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

    snprintf(output_buf, sizeof output_buf,
             "This is a ship. Speed: %d, distance to destination: %f, "
             "ship type: %s, time to destination: %f\n",
             ship->base->speed, ship->base->dest_distance,
             shipType, TimeToDest(ship->base));

    fputs(output_buf, ofstream);
}
