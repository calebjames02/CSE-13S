#include "tree.h"
#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_usage(void) {
    printf("Usage:  unique NUM NUM NUM ...       (normal output)\n");
    printf("        unique -d NUM NUM NUM ...    (debugging output)\n");
    exit(0);
}

/*
* Confirm that all characters of the string s are digits.
* If any character is NOT a digit, then call print_usage().
*/
void check_number(const char *s) {
    // replace this comment with your code
}

/*
* Usage:    unique 4 8 1 4 ...          call tree_print()
*           unique -d 4 8 1 4 ...       call tree_dump()
*/
int main(int argc, char **argv) {
    // replace this comment with your code
    return 0;
}
