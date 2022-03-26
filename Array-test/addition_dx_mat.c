#include <stdio.h>
#include <stdlib.h>

void addition_2_mat(int n, int m, int mat1[n][m],int mat2[n][m], int C[n][m])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            C[i][j] = mat1[i][j] + mat2[i][j] ;
        }
    }
}
