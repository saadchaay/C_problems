#include <stdio.h>
#include <stdlib.h>

void triangle_PASCAL(int n,int m, int mat[n][m])
{
    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i >= j){
                mat[i][0] = 1 ;
                if(i == j)
                    mat[i][j] = 1 ;
                else
                    mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
            }
            else mat[i][j] = 0;
        }
    }
}
