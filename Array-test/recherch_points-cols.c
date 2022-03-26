#include <stdio.h>
#include <stdlib.h>

void recherch_points_cols(int n,int m, int t[n][m])
{
    int i,j,C;
    int MIN[n][m],MAX[n][m],tmp;

    for(i=0; i<n; i++)
    {
       tmp = t[i][0] ;
       for(j=1; j<m; j++)
        if(t[i][j] > tmp) tmp = t[i][j] ;

       for(j=0; j<m; j++)
        if(tmp == t[i][j]) MAX[i][j] = 1;
        else MAX[i][j] = 0;
    }

    for(j=0; j<n; i++)
    {
       tmp = t[0][j] ;
       for(i=1; i<m; i++)
        if(t[i][j] < tmp) tmp = t[i][j] ;

       for(j=0; j<m; j++)
        if(tmp == t[i][j]) MIN[i][j] = 1;
        else MIN[i][j] = 0;
    }

    printf("Points - cols :\n");
 for (C=0, i=0; i<n; i++)
      for (j=0; j<m; j++)
           if (MAX[i][j]&&MIN[i][j])
              {
               C++;
               printf("L'élément %d\test un maximum "
                      "sur la ligne %d\n"
                      "             \t et un minimum "
                      "sur la colonne %d\n", t[i][j], i, j);
              }
     if (C==0)
        printf("Le tableau ne contient pas de points-cols.\n");


}

