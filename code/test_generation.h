#ifndef PROC_C_1_TEST_GENERATION_H_
#define PROC_C_1_TEST_GENERATION_H_

/*--------------------------- test_generation.h ---------------------------
 * Contains a declaration of a function for generating a test input case.
 *-------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "rnd.h"

/// Generates a test input case in a given file.
/// @param ofstream Output file stream.
void GenerateTest(FILE *ofstream);

#endif //PROC_C_1_TEST_GENERATION_H_
