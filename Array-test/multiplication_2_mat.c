#include <stdio.h>
#include <stdlib.h>

void multiplication_2_mat(int n,int m, int mat1[n][m], int mat2[m][n], int C[n][n])
{
    int i,j,k;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            C[i][j] = 0;
            for(k=0; k<m; k++)
            {
                C[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
