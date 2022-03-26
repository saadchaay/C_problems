#include <stdio.h>
#include <stdlib.h>

void tri_par_selection(int n, int T[n])
{
    int i,j,pMax,tmp;

    for(i=0; i<n; i++)
    {
        pMax = i;
        for(j=i+1; j<n; j++)
        {
            if(T[pMax] < T[j])
                pMax = j;
            tmp = T[i];
            T[i] = T[pMax];
            T[pMax] = tmp;
        }
    }
}
