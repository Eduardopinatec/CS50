//Notes Here starts the code

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int num1 = 0, num2 = 0;
    num1 = get_int ("x: ");
    num2 = get_int ("y: ");
    if (num1 < num2)
    {
        printf ("Num2 is bigger\n");
    }
    else if (num1 > num2)
    {
        printf ("Num1 is bigger'\n");
    }
    else 
    {
        printf ("Both numbers are equals\n");
    }
}
