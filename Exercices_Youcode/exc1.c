#include <stdio.h>
#include <stdlib.h>

void trouv_max()
{
    int pr_num, dx_num, troi_num;
    int max_num ;
    printf("\nDonner trois numbres positive!!\n");
    printf("First number => ");scanf("%d",&pr_num);
    printf("Second number => ");scanf("%d",&dx_num);
    printf("Third number => ");scanf("%d",&troi_num);
    if(pr_num > dx_num)
        max_num = pr_num ;
    else
        if(dx_num > troi_num)
            max_num = dx_num;
        else
            max_num = troi_num ;
    printf("Le max est: %d", max_num);
}
