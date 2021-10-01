#ifndef PROC_C_1_FILE_READ_H_
#define PROC_C_1_FILE_READ_H_

/*------------------------------ file_read.h ------------------------------
 * Contains a declaration of a function for reading and parsing lines from
 *   file stream.
 *-------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

enum {MAX_LINE_LENGTH = 256};

/// Reads the given amount of argument values from line in the file.
/// @param arg_count Amount of arguments to be read.
/// @param ifstream_line Input file stream (pointer to the current line).
int *ReadArgsFromLine(int arg_count, FILE *ifstream_line);

#endif //PROC_C_1_FILE_READ_H_