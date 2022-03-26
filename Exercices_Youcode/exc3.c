#include <stdio.h>
#include <stdlib.h>

void num_impair_pair()
{
    int num;
    printf("\nDonner un numbres positive!!\n");
    scanf("%d",&num);
    if(num%2==0)
        printf("Le nombre qui vous saise est PAIR !");
    else printf("Le nombre qui vous saise est IMPAIR !");
}

