#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = get_string ("Input: ");
    printf("Output: ");
    for (int i = 0; i<strlen(s); i++)//for (int i = 0; s[i]!= '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <='z')
        {
            printf("%c", s[i]-32);
        }
        else
        {
        printf ("%c", s[i]);
        }
    }
    printf ("\n");
}