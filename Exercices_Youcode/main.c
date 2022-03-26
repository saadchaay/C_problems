#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void trouv_max();
void div_tr();
void num_impair_pair();
void alphabet_cns_voyl();
void jour_semaine();
void jour_mois();
void trv_racine_eq();
void profit_ou_perte();
void si_annee_bix();
void concept_ex(int nm);
void stru_ex(int num);
void calculator();

int main()
{
    char readyQ ;
    int i, num_ex;
    char titles[10][200] = {
        "un maximum entre trois nombres.",
        "un nombre est divisible par 3 et 13.",
        "un nombre est pair ou impair.",
        "un alphabet est une voyelle ou une consonne.",
        "le nom du jour de la semaine.",
        "le nombre de jours de un mois.",
        "les racines d'une equation quadratique.",
        "verification le profit ou la perte.",
        "l'annee donnee est bissextile ou non.",
        "Calculatrice."
    };
    //welcome
    printf("\t\t|||||||***** WELCOME ON 'YOUCODE-EXERCICE' *****|||||||\n");
        printf("\t======> ARE U READY ?? prese: Y or N. ");
        do {
            scanf("%c",&readyQ);
        }while(readyQ != 'y' && readyQ != 'Y');
        printf("##### So we have 10 exercice: 'choose your exercice!'\n");

        // Title of the exercices ...
        for(i=0; i<10; i++){
            printf("%d: %s\n",i+1,titles[i]);
        }

        // teste le nombre des exercices
        do{
          printf("\nplease enter number between 1 and 10!\n===> ");
          scanf("%d",&num_ex);
        }while(num_ex < 1 || num_ex >10);
        system("cls");
    printf("*****You chose exercice %d: %s*****\n",num_ex,titles[num_ex-1]);
    concept_ex(num_ex);
    stru_ex(num_ex);

      printf("\n\n\t\t*****THANKS*****\n",num_ex,titles[num_ex-1]);
    return 0;
}

void concept_ex(int nm)
{
    char titles[10][200] = {
        "un programme pour trouver un maximum entre trois nombres en utilisant une if-else ou if imbriquée",
        "un programme pour vérifier si un nombre est divisible par 3 et 13 ou non, en utilisant if-else.",
        "un programme pour vérifier si un nombre est pair ou impair en utilisant if-else.",
        "un programme pour vérifier si un alphabet est une voyelle ou une consonne en utilisant if-else.",
        "un programme pour entrer le numéro du jour de la semaine (1-7) et affichez le nom du jour de la semaine correspondant en utilisant if-else.",
        "un programme pour entrer le numéro du mois entre (1-12) et afficher le nombre de jours de ce mois en utilisant if-else.",
        "un programme pour trouver toutes les racines d'une équation quadratique en utilisant if-else.",
        "un programme pour saisir le prix de fabrication et le prix de vente d'un produit et vérifiez le profit ou la perte.",
        "un programme pour vérifier si l'année donnée par l'utilisateur est bissextile ou non, en utilisant if-else.",
        "un programme pour saisir deux nombres et un operateur arithmetique puis afficher le resultat selon l'operateur."
    };
    printf("\nLe concept de ce exercice est: %s",titles[nm-1]);
}

void stru_ex(int num)
{
    int i;
    switch(num)
    {
    case(1):
        trouv_max();
        break;
    case(2):
        div_tr();
        break;
    case(3):
        num_impair_pair();
        break;
    case(4):
        alphabet_cns_voyl();
        break;
    case(5):
        jour_semaine();
        break;
    case(6):
        jour_mois();
        break;
    case(7):
        trv_racine_eq();
        break;
    case(8):
        profit_ou_perte();
        break;
    case(9):
        si_annee_bix();
        break;
    case(10):
        for(i=0; i<3; i++){
            calculator();
        }
        break;
    }
}

