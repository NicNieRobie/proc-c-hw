#include "test_generation.h"

void GenerateTest(FILE *ofstream) {
    int entity_count = RandInt(5, 10000);

    for (int i = 0; i < entity_count; i++) {
        int transport_type = RandInt(1, 3);
        fprintf(ofstream, "%d\n", transport_type);
        int* args;
        int arg_count;
        switch (transport_type) {
            case 1: {
                arg_count = PLANE_ARGS;
                args = calloc(arg_count, sizeof(int));
                args[0] = RandInt(100, 700); // speed
                args[1] = RandInt(500, 3000); // distance to destination
                args[2] = RandInt(500, 7000); // maximum reach
                args[3] = RandInt(3, 300); // capacity
                break;
            }
            case 2: {
                arg_count = SHIP_ARGS;
                args = calloc(arg_count, sizeof(int));
                args[0] = RandInt(100, 700); // speed
                args[1] = RandInt(500, 3000); // distance to destination
                args[2] = RandInt(1, 3); // ship type
                args[3] = RandInt(1000, 15000); // displacement
                break;
            }
            case 3: {
                arg_count = TRAIN_ARGS;
                args = calloc(arg_count, sizeof(int));
                args[0] = RandInt(100, 700); // speed
                args[1] = RandInt(500, 3000); // distance to destination
                args[2] = RandInt(5, 15); // car amount
                break;
            }
        }

        for (int i = 0; i < arg_count; i++) {
            char suffix = (i == arg_count - 1) ? '\n' : ' ';
            fprintf(ofstream, "%d%c", args[i], suffix);
        }
    }
}