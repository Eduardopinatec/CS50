#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string s = get_string ("Input: ");
    printf("Output: ");
    for (int i = 0; i<strlen(s); i++)//for (int i = 0; s[i]!= '\0'; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf ("\n");
}