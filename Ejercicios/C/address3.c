#include <stdio.h>

int main (void)
{
    char *s = "EMMA";
    printf ("%c", *s);
    printf ("%c", *(s+1));
    printf ("%c", *(s+2));
    printf ("%c", *(s+3));
    printf ("%c", *(s+4));
}