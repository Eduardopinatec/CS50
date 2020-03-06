#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0, num1 = 0, cont = 0;
    bool correct = false;
    while (correct == false)
    {
        height = get_int ("Height: ");
        if (height <= 8 && height >=1)
            correct = true;
    } 
    for (int i = height; i > 0; i--)
    {   
        cont = height;
        for (int j = 1; j< i; j++)
        {
            printf(" ");
            cont = height - j;
        }
        for (int c = cont; c > 0; c--)
        {
            printf("#");
        }
        printf(" ");
        for (int h = cont; h > 0; h--)
        {
            printf("#");
        }
        printf("\n");
    }
}
