/*-------------------------------- ship.c ---------------------------------
 * Ship data type functionality definition.
 *-------------------------------------------------------------------------*/

#include "transport.h"
#include "timer.h"

//-------------------------------------------------------------------------
/// Initializes the ship_st object with arguments from input file stream.
/// @param ship Pointer to the object being initialized.
/// @param ifstream Input file stream.
void ShipIn(ship_st *ship, FILE *ifstream) {
    int *values = ReadArgsFromLine(2, ifstream);

    if (values == NULL) {
        fprintf(stderr, "COULD NOT READ TRANSPORT DATA");
        PrintRuntimeDuration();
        exit(EXIT_FAILURE);
    }

    if (values[0] < 1 || values[0] > 3) {
        fprintf(stderr, "INCORRECT SHIP TYPE");
        PrintRuntimeDuration();
        exit(EXIT_FAILURE);
    }

    ship->st = values[0];
    ship->displacement = values[1];
}

//-------------------------------------------------------------------------
/// Returns the pointer to ship_st object initialized with random values.
ship_st *ShipInRand() {
    ship_st *ship = malloc(sizeof(ship_st));
    ship->st = RandInt(1, 3);
    ship->displacement = RandInt(1000, 65000);
    return ship;
}

//-------------------------------------------------------------------------
/// Prints a description of the ship_st object to output file stream.
/// @param ship Pointer to the object being described.
/// @param ofstream Output file stream.
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

    printf("ship type: %s, displacement: %d\n",
            shipType, ship->displacement);

    fprintf(ofstream, "ship type: %s, displacement: %d\n",
            shipType, ship->displacement);
}
