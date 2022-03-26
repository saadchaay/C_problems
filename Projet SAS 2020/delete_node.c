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


void deleteNode(prs *head, int key)
{
    prs *tmp,*prv;
    tmp = head ;
    if(tmp != NULL && tmp->id == key)
    {
        head = tmp->next ;
        free(tmp);
        return;
    }
    while(tmp != NULL && tmp->id !=key)
    {
        prv = tmp ;
        tmp = tmp->next;
    }
    if(tmp == NULL) return ;
    prv->next = tmp->next;
    free(tmp);
}
