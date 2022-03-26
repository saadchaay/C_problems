#include <stdio.h>
#include <stdlib.h>

void matrice_unitaire(int n, int A[n][n])
{
    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            if(i == j)
                A[i][j] = 1;
            else A[i][j] = 0;
    }
}
