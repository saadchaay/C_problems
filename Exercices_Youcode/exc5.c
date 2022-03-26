#include <stdio.h>
#include <stdlib.h>

void jour_semaine()
{
    int num_jour;
    printf("\nDonner un numbres de jour positive\n");
    scanf("%d",&num_jour);
    if(num_jour >= 1 && num_jour <= 7)
    switch(num_jour)
    {
        case(1):
            printf("le jour est lundi");
            break;
        case(2):
            printf("le jour est MARDI");
            break;
        case(3):
            printf("le jour est MERCREDI");
            break;
        case(4):
            printf("le jour est JEUDI");
            break;
        case(5):
            printf("le jour est VENDREDI");
            break;
        case(6):
            printf("le jour est SAMEDI");
            break;
        case(7):
            printf("le jour est DIMANCH");
            break;
    }
    else printf("error !! we have just 7 days so please enter number between 1 and 7");
}


