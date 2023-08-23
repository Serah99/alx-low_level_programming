#include <stdio.h>

char *_strcat(char *dest, char *src) {
    char *init_dest = dest;
    while (*dest) dest++;
    while (*src) *dest++ = *src++;
    *dest = '\0';
    return init_dest;
}

// Testing the function
int main() {
    char dest[100] = "Hello, ";
    char src[] = "World!";
    printf("%s\n", _strcat(dest, src));  // Expected: Hello, World!
    return 0;
}
