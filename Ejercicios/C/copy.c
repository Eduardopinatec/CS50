#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s)+1);

/*    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }*/
    strcpy (t,s);

    t[0]= toupper(s[0]);

    printf ("%s\n", s);
    printf ("%s\n", t);
/*    string s = get_string("S:");
    string t = s;

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);*/

    free(t);
}