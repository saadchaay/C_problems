#include <stdio.h>
#include <stdlib.h>

void jour_mois()
{
    int num_mois;
    printf("\nDonner un numbre d'un mois positive\n");
    scanf("%d",&num_mois);
    if(num_mois >= 1 && num_mois <= 7)
    switch(num_mois)
    {
        case(1):
            printf("this mount contains 31 days");
            break;
        case(2):
            printf("this mount contains 28 days in common year and 29 days in leap year\n");
            printf("check this link for more informations: https://www.timeanddate.com/date/common-year.html");
            break;
        case(3):
            printf("this mount contains 31 days");
            break;
        case(4):
            printf("this mount contains 30 days");
            break;
        case(5):
            printf("this mount contains 31 days");
            break;
        case(6):
            printf("this mount contains 30 days");
            break;
        case(7):
            printf("this mount contains 31 days");
            break;
        case(8):
            printf("this mount contains 31 days");
            break;
        case(9):
            printf("this mount contains 30 days");
            break;
        case(10):
            printf("this mount contains 31 days");
            break;
        case(11):
            printf("this mount contains 30 days");
            break;
        case(12):
            printf("this mount contains 31 days");
            break;
    }
    else printf("error !! we have just 12 months so please enter number between 1 and 12");
}



