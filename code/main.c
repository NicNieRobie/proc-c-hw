/*--------------------------------- main.c --------------------------------
 * Program entry point and error messages.
 *-------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "container.h"
#include "test_generation.h"

//-------------------------------------------------------------------------
/// Generates a given amount of test input files in a specified directory.
/// @param file_count Amount of files to be generated.
/// @param dir_path Path to directory.
void GenerateTestFiles(int file_count, char* dir_path) {
    if (file_count > 124) {
        fprintf(stderr, "Number of files is too big. "
                        "Specify a number that is less than 124.");
        exit(EXIT_FAILURE);
    }

    // Generating the files.
    for (int i = 1; i <= file_count; i++) {
        char filename_buffer[128];
        snprintf(filename_buffer, 128, "%s/test%d.txt", dir_path, i);
        FILE *ofstream = fopen(filename_buffer, "w");
        GenerateTest(ofstream);
        printf("test generated in %s/test%d.txt\n", dir_path, i);
    }
}

//-------------------------------------------------------------------------
/// Prints the argument number error.
void ArgNumError() {
    fprintf(stderr, "Incorrect number of arguments in the command line!\n"
            "  Expected:\n"
            "     processname -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     processname -n number outfile01 outfile02\n"
            "  Or:\n"
            "     processname -g number dirpath");
}

//-------------------------------------------------------------------------
/// Prints the input mode error.
void InputModeError() {
    fprintf(stderr, "Incorrect input mode!\n"
           "  Expected:\n"
           "     processname -f infile outfile01 outfile02\n"
           "  Or:\n"
           "     processname -n number outfile01 outfile02\n"
           "  Or:\n"
           "     processname -g number dirpath");
}

//-------------------------------------------------------------------------
/// Program entry point.
int main(int argc, char* argv[]) {
    fprintf(stdin, "Start\n");

    // Generating the tests.
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
    }
    // Processing input data.
    else {
        if(argc != 5) {
            ArgNumError();
            exit(EXIT_FAILURE);
        }

        container_st c;
        Initialize(&c);

        // Reading from file.
        if(strcmp(argv[1], "-f") == 0) {
            FILE *ifstream = fopen(argv[2], "r");
            if(!ifstream) {
                perror("could not read file");
                exit(EXIT_FAILURE);
            }
            In(&c, ifstream);
        }
        // Generating the container randomly.
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

        // Printing the results.

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

    fprintf(stdin, "Stop");
    return 0;
}
