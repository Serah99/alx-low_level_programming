#include <stdio.h>

char *_strcat(char *d, char *s)
{
char *orig_d = d;

    while (*d)
    {
        d++;
    }

    while (*s)
    {
        *d = *s;
        d++;
        s++;
    }

    *d = '\0';
    return orig_d;
}

int main(void)
{
    char d[100] = "Hello, ";
    char s[] = "World!";
    printf("%s\n", _strcat(d, s));
    return 0;
}
