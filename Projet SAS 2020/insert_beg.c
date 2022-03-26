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

void insert_at_Beg(prs **head,int data_id, char data_name[20])
{
    prs *new_el = (prs*)malloc(sizeof(prs));
    new_el->id = data_id;
    strcpy(new_el->name,data_name);
    new_el->next = *head;
    *head = new_el;
}
