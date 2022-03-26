#include <stdio.h>
#include <stdlib.h>

void Tri_functions();
void dd_matrice_functions();

int main()
{
    //Tri_functions();


    return 0;
}


void Tri_functions()
{
    int n;

    printf("donner la taille de la ligne du tableau: ");
    scanf("%d",&n);

    int T[n];


    insertion_tab(n,T);      // insertion de tableau
    display_tab(n,T);       // Affichage de tableau

    tri_par_propagation(n,T);  // Tri par propagation
    display_tab(n,T);

    tri_par_selection(n,T);     // Tri par selection
    display_tab(n,T);

}

void dd_matrice_functions()
{
    int i,j,n,m;

    printf("donner la taille de la ligne du tableau: ");     // valeur de la ligne de matrice
    scanf("%d",&n);

    printf("donner la taille de la colonne du tableau: ");     // valeur de la colonne de matrice
    scanf("%d",&m);

    int A[n][m],B[n][m],C[n][m];


    insertion_tab_dd(n,m,A);
    display_tab_dd(n,m,A);
    /*insertion_tab_dd(m,n,B);
    display_tab_dd(m,n,B);
    multiplication_2_mat(n,m,A,B,C);
    display_tab_dd(n,n,C);*/

    //triangle_PASCAL(n,m,A);
    //display_Tringle_PASCAL(n,m,A);
    //recherch_points_cols(n,m,A);

}
