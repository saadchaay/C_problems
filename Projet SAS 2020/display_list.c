#include <stdio.h>
#include <stdlib.h>

typedef struct president
{
    int id;
    char name[20];
    struct president *next;
}prs;

typedef struct electeurs
{
    int CIN;
    struct electeurs *next;
}elc;

void display_list(prs *head)
{
    prs *temp = head;
    printf("\nThe presidents are: \n");
    if(temp == NULL)
    {
        printf("\nNode is empty");
    }
    else {
        while(temp != NULL)
        {
            printf("\nId: %d\t",temp->id);
            printf("Name: %s",temp->name);
            temp = temp->next;
        }
    }

}
