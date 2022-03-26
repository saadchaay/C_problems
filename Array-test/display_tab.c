#include <stdio.h>
#include <stdlib.h>

void display_tab(int n, int T[n])
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",T[i]);
    }
    printf("\n\n");
}


void display_tab_dd(int n, int m, int T[n][m])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d\t",T[i][j]);
        printf("\n");
    }
    printf("\n\n");

}
void display_Tringle_PASCAL(int n, int m, int T[n][m])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            if(T[i][j] != 0)
                printf("%d\t",T[i][j]);
        printf("\n");
    }
    printf("\n\n");

}
