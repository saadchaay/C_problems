#include <stdio.h>
#include <stdlib.h>

#define Min-presidents 5
#define Min-electeurs 10

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

void display_list(prs *head);
void insert_at_Beg(prs **head,int data_id, char data_name[20]);
void deleteNode(prs *head, int id_elem);

int main()
{
    int prs_nb,i;
    printf("Enter number of president's list! sup a 5\n");
    do{
        scanf("%d",&prs_nb);
    }while( prs_nb < 3);

    prs *node = NULL;
    display_list(node);

    insert_at_Beg(&node,125390,"saaadd");
    display_list(node);
    deleteNode(node,125390);
    display_list(node);
    return 0;
}
