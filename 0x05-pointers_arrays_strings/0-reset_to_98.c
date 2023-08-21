#include <stdio.h>

void reset_to_98(int *n) {
    if (n != NULL) { /* Check to ensure the pointer is not NULL */
        *n = 98;     /* Update the value it points to */
    }
}
