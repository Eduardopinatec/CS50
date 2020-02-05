#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int age = 0;
    int days = 0;
    age = get_int("What is your age?\n");
    days = age * 365;
    printf ("You are at least %i days old.\n", days);
}
