#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *list = malloc (3* sizeof(int));
    if (list == NULL)//All ways you used malloc check your memory has space.
    {
        return 1;
    }


    list[0]=1;
    list[1]=2;
    list[2]=3;

    int *tmp = realloc (list, 4 *sizeof(int));
    //int *tmp = malloc(4*sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }
    //Copy int from old to new
    /*for (int i = 0; i< 3; i++)
    {
        tmp[i]=list[i];
    }*/
    tmp[3]=4;
    //free(list);
    list = tmp;
    for (int i = 0; i < 4; i++)n
    {
        printf("%i\n", list[i]);
    }
    free(list);
}