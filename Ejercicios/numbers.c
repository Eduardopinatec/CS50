#include <Stdio.h>
#include <cs50.h>

in main (void)
{
    int numbers[6] = {4, 8, 15, 16, 23, 42}

    for (int i = 0; i < 6; i ++)
    {
        if (numbers[i] == 50)
        {
            printf ("true\n");
        }
    }
    printf ("false \n");//Esta mal esto
}