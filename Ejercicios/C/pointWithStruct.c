#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main (void)
{
    node *list = NULL;
    node *tmp = list;
    while (tmp->next != NULL)
    {
        tmp = tmp->
    }
}

void create (int num)
{
    node *n = malloc(sizeof(node));
    if (n!=NULL)
    {
        n->number = num;
        n->next = NULL;
    }
}