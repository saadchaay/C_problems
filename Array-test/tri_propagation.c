#include <stdio.h>
#include <stdlib.h>

void tri_par_propagation(int n, int T[n])
{
    int i,j,tmp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i != j)
            {
                if(T[j] > T[j+1])
                {
                    tmp = T[j];
                    T[j] = T[j+1];
                    T[j+1] = tmp;
                }
            }
        }
    }
}

