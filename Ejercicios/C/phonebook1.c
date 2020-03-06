#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string names;
    string numbers;
}
person;

int main (void)
{
    person people [4];

    people[0].names = "EMMA";
    people[0].numbers = "617-555-0100";

    people[1].names = "RODRIGO";
    people[1].numbers = "617-555-0101";

    people[2].names = "BRIAN";
    people[2].numbers = "617-555-0102"; 

    people[3].names = "DAVID";
    people[3].numbers = "617-555-0103";

    //string names [4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    //string numbers [4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].names, "EMMA")== 0)
        {
            printf ("%s\n", people[i].numbers);
        }
    }
}