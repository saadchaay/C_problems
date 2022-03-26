#include <stdio.h>
#include <stdlib.h>

int trouv_max(int pr_num, int dx_num, int troi_num)
{
    int max_num ;
    if(pr_num > dx_num)
        max_num = pr_num ;
    else
        if(dx_num > troi_num)
            max_num = dx_num;
        else
            max_num = troi_num ;
    return max_num;
}
