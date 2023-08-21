#include <stdio.h>

void reset_to_98(int *n) {
    if (n != NULL) { /* Check to ensure the pointer is not NULL */
        *n = 98;     /* Update the value it points to */
    }
}

int main() {
    int x = 0;
    printf("Before: %d\n", x);
    
    reset_to_98(&x);  /* Pass the address of x to the function */
    
    printf("After: %d\n", x);

    return 0;
}
