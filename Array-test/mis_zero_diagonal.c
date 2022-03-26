#include <stdio.h>
#include <stdlib.h>

void mis_zero_diagonal(int n, int T[n][n])
{
    int i,j,tmp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j)
            {
                T[i][j] = 0;
            }
        }
    }
}


