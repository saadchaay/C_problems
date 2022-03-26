


void transposition_matrice(int n, int m, int A[n][m], int B[m][n])
{
    int i,j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
                B[i][j] = A[j][i] ;
        }
    }
}
