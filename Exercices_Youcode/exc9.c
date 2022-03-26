#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void si_annee_bix()
{
    int year;
    printf("\nDonnee un annee: ");scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%4==0 && year%400==0))
        printf("L'annee qui vous saise est bissextile !!");
    else printf("L'annee qui vous saise est un annee normal !!");
}
