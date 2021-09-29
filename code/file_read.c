/*------------------------------ file_read.c ------------------------------
 * Contains a definition of a function for reading and parsing lines from
 *   file stream.
 *-------------------------------------------------------------------------*/

#include "file_read.h"

//-------------------------------------------------------------------------
/// Reads the given amount of argument values from line in the file.
/// @param arg_count Amount of arguments to be read.
/// @param ifstream_line Input file stream (pointer to the current line).
int *ReadArgsFromLine(int arg_count, FILE *ifstream_line) {
    char *end;
    char **num_strs = calloc(arg_count, sizeof(char*));
    char line[MAX_LINE_LENGTH];

    if (fgets(line, MAX_LINE_LENGTH, ifstream_line) == NULL) {
        return NULL;
    }

    char *word_ptr;
    short cntr = 0;
    word_ptr = strtok(line, " ");
    while (word_ptr != NULL) {
        num_strs[cntr] = word_ptr;
        word_ptr = strtok(NULL, " ");
        cntr++;
    }

    if (cntr != arg_count) {
        fprintf(stderr, "WRONG NUMBER OF ARGUMENTS IN THE DATA");
        exit(EXIT_FAILURE);
    }

    int* values = calloc(arg_count, sizeof(int));
    for (int i = 0; i < cntr; i++) {
        values[i] = strtol(num_strs[i], &end, 10);
    }

    free(num_strs);
    return values;
}