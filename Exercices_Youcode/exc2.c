#include <stdio.h>
#include <stdlib.h>

void div_tr()
{
    int num;
    printf("\nDonner un numbre positive pour verifier si ce nombre est divise par 3 et 13!!\n");
    scanf("%d",&num);
    if(num%3==0 && num%13==0)
        printf("Le nombre qui vous saise est divise par 3 et 13 !! ");
    else printf("SORRY -_- !! Le nombre qui vous saise est divise pas par 3 et 13.");
}

