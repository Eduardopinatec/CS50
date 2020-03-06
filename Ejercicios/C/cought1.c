#include <stdio.h>

void cough(void); //Para que c sepa que existe la funcion

int main (void)
{
    for (int i = 0; i < 3; i++)
    {
        cough();   
    }
}

void cough(void)
{
    printf ("cough\n");
}
