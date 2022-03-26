#include <stdio.h>
#include <stdlib.h>

void insertion_tab(int n, int T[n])
{
    int i,j;
    printf("Inserer le tableau !!\n");
    for(i=0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&T[i]);
    }
}

void insertion_tab_dd(int n, int m, int T[n][m])
{
    int i,j;
    printf("Inserer le tableau !!\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            T[i][j] = rand() % 50 ;
        }
    }
    printf("DONE !!\n");

}

