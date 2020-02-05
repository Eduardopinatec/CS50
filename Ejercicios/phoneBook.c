#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    //Open File
    FILE *file =fopen("phonebook.csv", "a");

    //Get string from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //Print (Write) string to file
    fprintf(file, "%s,%s\n", name, number);

    //Close file
    fclose(file);

}