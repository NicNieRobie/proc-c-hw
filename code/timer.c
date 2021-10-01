/*-------------------------------- timer.c --------------------------------
 * Timer runtime metrics function definition.
 *-------------------------------------------------------------------------*/

#include "timer.h"
#include "stdio.h"

//-------------------------------------------------------------------------
/// Prints runtime duration.
void PrintRuntimeDuration() {
    // Measuring the runtime.
    end_time = clock();
    float seconds = (float)(end_time - start_time) / CLOCKS_PER_SEC;

    fprintf(stdout, "Stop at %.9g secs\n", seconds);
}