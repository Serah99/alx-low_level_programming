#include <stdio.h>
char *_strcat(char *dest, char *src)
{
/* Pointer to keep the start of dest */
char *original_dest = dest;
/* Move to the end of the dest string */
while (*dest)
{
dest++;
}
/* Now copy src to dest */
while (*src)
{
*dest = *src;
dest++;
src++;
}
/* Add the terminating null byte */
*dest = '\0';
/* Return the concatenated string */
return original_dest;
}
/* A simple test */
int main(void)
{
char dest[100] = "Hello, ";
char src[] = "World!";                                                                                                           printf("%s\n", _strcat(dest, src));  /* Should print "Hello, World!" */
    return 0;
}
