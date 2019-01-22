/*****************************************
 *
 *A simplest shell written in c lang.
 *
 * Basic lifetime of a shell
 * - Initialize: A typical shell would read and execute its configuration
 *              and execute its configuration files. These change aspects of the shell's behavior. 
 * - Interpret: Next, the shell reads commands from stdin (which could be interactive, or a file) and 
 *              executes them.
 * - Terminate: After its commands are executed, the shell executes any shutdown commands, frees up any
 *              memory, and terminates.
 *
 *author: rovo98
 *date: 2018.9.3
 **********************************************/
#include "simple-shell-in-c.h"
#include "func-impl.c"
#include <stdio.h>

/**
   @brief Main entry point.
   @param argc Argument count.
   @param argv Argument vector.
   @return status code
 */
int main() {
   // Load config files, if any.
 
   // Run command loop.
   lsh_loop();

   // Perform any shutdown/cleanup.
   
   return 0;
}
