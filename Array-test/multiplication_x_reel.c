#include <stdio.h>
#include <stdlib.h>

void multiplication_x_reel(int n, int m, int A[n][m], int B[n][m])
{
    float x;
    int i,j;

    printf("Donner le X nombre reel: ");
    scanf("%f",&x);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            B[i][j] = (float)(x * A[i][j]);
    }
}
