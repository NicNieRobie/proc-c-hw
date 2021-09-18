#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "container.h"

void ArgNumError() {
    printf("Incorrect command line!\n"
            "  Expected:\n"
            "     processname -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     processname -n number outfile01 outfile02\n");
}

void InputModeError() {
    printf("Incorrect input mode!\n"
           "  Expected:\n"
           "     processname -f infile outfile01 outfile02\n"
           "  Or:\n"
           "     processname -n number outfile01 outfile02\n");
}

int main(int argc, char* argv[]) {
    if(argc != 5) {
        ArgNumError();
        return 1;
    }

    printf("Start\n");
    container_st c;
    Initialize(&c);

    if(strcmp(argv[1], "-f") == 0) {
        FILE *ifstream = fopen(argv[2], "r");
        if(!ifstream) {
            perror("could not read file");
            exit(EXIT_FAILURE);
        }
        In(&c, ifstream);
    }
    else if(strcmp(argv[1], "-n") == 0) {
        int size = atoi(argv[2]);
        if((size < 1) || (size > 10000)) {
            printf("Amount exceeds the max container size. "
                   "Enter a value: 0 < value <= 10000\n", size);
            return 3;
        }

        srand(time(0));
        InRand(&c, size);
    }
    else {
        InputModeError();
        return 2;
    }

    FILE *ofstream1 = fopen(argv[3], "w");
    if(!ofstream1) {
        perror("could not write to file");
        exit(EXIT_FAILURE);
    }

    Out(&c, fopen(argv[3], "w"));

    DeleteLessThanAverage(&c);

    FILE *ofstream2 = fopen(argv[4], "w");
    if(!ofstream2) {
        perror("could not write to file");
        exit(EXIT_FAILURE);
    }

    Out(&c, fopen(argv[4], "w"));

    Clear(&c);
    printf("Stop");
    return 0;
}
