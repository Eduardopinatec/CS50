#include <stdio.h>

void cough(int n); //Para que c sepa que existe la funcion

int main (void)
{
    cough(3);
}

void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
         printf ("cough\n");
    }
}
