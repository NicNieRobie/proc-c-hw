#include "test_generation.h"

void GenerateTest(FILE *ofstream) {
    int entity_count = RandInt(5, 20);

    for (int i = 0; i < entity_count; i++) {
        int transport_type = RandInt(1, 3);
        int speed = RandInt(100, 700);
        int dist_to_dest = RandInt(500, 3000);
        fprintf(ofstream, "%d %d %d\n", transport_type, speed, dist_to_dest);

        switch (transport_type) {
            case 1: {
                int max_reach = RandInt(500, 7000);
                int cap = RandInt(3, 300);
                fprintf(ofstream, "%d %d\n", max_reach, cap);
                break;
            }
            case 2: {
                int ship_type = RandInt(1, 3);
                int disp = RandInt(1000, 15000);
                fprintf(ofstream, "%d %d\n", ship_type, disp);
                break;
            }
            case 3: {
                int car_amount = RandInt(5, 15);
                fprintf(ofstream, "%d\n", car_amount);
                break;
            }
        }
    }
}