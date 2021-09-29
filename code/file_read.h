#ifndef PROC_C_1_FILE_READ_H
#define PROC_C_1_FILE_READ_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {MAX_LINE_LENGTH = 256};

int *ReadArgsFromLine(int arg_count, FILE *ifstream_line);

#endif //PROC_C_1_FILE_READ_H
