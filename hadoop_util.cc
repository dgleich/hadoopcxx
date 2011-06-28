/**
 * @file hadoop_util.cc
 * A few helper functions for working with Hadoop streaming programs.
 */

/**
 * History
 * -------
 * :2011-06-27: Ripped from mrtsqr into independent hadoop library
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/** Write a message to stderr
 */
void hadoop_message(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end (args);
}

/** Write a status message to hadoop.
 *
 */
void hadoop_status(const char* format, ...) {
    va_list args;
    va_start (args, format);
    
    // output for hadoop
    fprintf(stderr, "reporter:status:");
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");
    
    // also print to stderr
    fprintf(stderr, "status: ");
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");
    
    va_end (args);
}

void hadoop_counter(const char* name, int val) {
    fprintf(stderr, "reporter:counter:Program,%s,%i\n", name, val);
}
