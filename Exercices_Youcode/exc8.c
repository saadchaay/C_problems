#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void profit_ou_perte()
{
    float pr_fabri, pr_vente;
    printf("\nDonnee le prix de fabrication et prix de vente: ");
    printf("\nLe prix de Fabrication: ");scanf("%f",&pr_fabri);
    printf("\nLe prix de Vente: ");scanf("%f",&pr_vente);
    if(pr_fabri > pr_vente)
        printf("EMMM -_- PERTE");
    else printf("NICE ^_^ PROFIT <^_^>");
}




