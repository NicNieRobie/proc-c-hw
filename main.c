#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "container.h"
#include "test_generation.h"

void GenerateTestFiles(int file_count, char* dir_path) {
    if (file_count > 124) {
        fprintf(stderr, "Number of files is too big. "
                        "Specify a number that is less than 124.");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i <= file_count; i++) {
        char filename_buffer[128];
        snprintf(filename_buffer, 128, "%s/test%d.txt", dir_path, i);
        FILE *ofstream = fopen(filename_buffer, "w");
        GenerateTest(ofstream);
        printf("test generated in %s/test%d.txt\n", dir_path, i);
    }
}

void ArgNumError() {
    fprintf(stderr, "Incorrect command line!\n"
            "  Expected:\n"
            "     processname -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     processname -n number outfile01 outfile02\n"
            "  Or:\n"
            "     processname -g number dirpath");
}

void InputModeError() {
    fprintf(stderr, "Incorrect input mode!\n"
           "  Expected:\n"
           "     processname -f infile outfile01 outfile02\n"
           "  Or:\n"
           "     processname -n number outfile01 outfile02\n"
           "  Or:\n"
           "     processname -g number dirpath");
}

int main(int argc, char* argv[]) {
    fprintf(stdin, "Start\n");

    if(argc == 4) {
        if (strcmp(argv[1], "-g") == 0) {
            printf("\n");
            int file_count = atoi(argv[2]);
            char *dir_path = argv[3];
            GenerateTestFiles(file_count, dir_path);
            printf("%d tests generated\n\n", file_count);
        } else {
            InputModeError();
            exit(EXIT_FAILURE);
        }
    } else {
        if(argc != 5) {
            ArgNumError();
            exit(EXIT_FAILURE);
        }

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
                fprintf(stderr, "Amount %d exceeds the max container size. "
                                "Enter a value: 0 < value <= 10000\n", size);
                exit(EXIT_FAILURE);
            }

            srand(time(0));
            InRand(&c, size);
        }
        else {
            InputModeError();
            exit(EXIT_FAILURE);
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
    }

    printf("Stop");
    return 0;
}
