#ifndef PROC_C_1_TIMER_VALUES_H_
#define PROC_C_1_TIMER_VALUES_H_

/*-------------------------------- timer.h --------------------------------
 * Timer start, end values and runtime metrics function declaration.
 *-------------------------------------------------------------------------*/

#include <time.h>

/// Timer start time.
clock_t start_time;

/// Timer end time.
clock_t end_time;

/// Prints runtime duration.
void PrintRuntimeDuration();

#endif //PROC_C_1_TIMER_VALUES_H_
