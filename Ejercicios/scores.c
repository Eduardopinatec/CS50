#include <stdio.h>
#include <cs50.h>

float average (int length, int array[]);

int main(void)
{
    int num = get_int("how many numbers you want: ");
    float res = 0.0;
    int score[num];
    for (int i = 0; i<num; i++)
    {
        score[i] = get_int("Score %i:", i+1);
    }
    //res = average(num, score);
    //printf ("The average of your numbers is: %.1f\n", res);//the .1 is for saying how many decimals we want to show
    printf ("The average of your number is:%.1f\n", average(num,score));

}
float average (int length, int array[])
{
    float res = 0.0, suma = 0.0;
    for (int i = 0; i<length; i++)
    {
        suma = suma + array[i];
    }
    res = suma/(float) length;
    return res;
}