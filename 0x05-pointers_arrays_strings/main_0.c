#include <stdio.h>

void reset_to_98(int *n);

int main() {
    int x = 0;
    printf("Before: %d\n", x);
    
    reset_to_98(&x);  /* Pass the address of x to the function */
    
    printf("After: %d\n", x);

    return 0;
}
