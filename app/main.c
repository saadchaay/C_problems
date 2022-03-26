#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int iHeurs = 12, iMinutes = 30, iSecondes ; // declaration global variables
char cTab1[] = "saad" , cTab2[] = "chaay";

// functions
void affiche_heure();
void saisir_heure(int iH, int iM, int iS);
void tick();
int num_pair(int n);

int main(void)
{
    int U
    return 0;
}


//definition functions

void affiche_heure()
{
    printf("Il est %d heure",iHeurs); // affiche la premier phrase
    // teste la valeur de heur si sup a 1
    if(iHeurs > 1)
        printf("s");

    printf(" %d minute",iMinutes); // continue la phrase
    // teste la valeur de minute si sup a 1
    if(iMinutes > 1)
        printf("s");

    printf(" %d seconde",iSecondes);// continue la phrase
    // teste la valeur de seconde si sup a 1
    if(iSecondes > 1)
        printf("s");
        // retour a la ligne
    printf("\n");
}

void saisir_heure(int iH, int iM, int iS)
{
    iHeurs = iH;
    iMinutes = iM;
    iSecondes = iS;
}

void tick()
{
    int nom_sec = (iHeurs*3600) + (iMinutes*60) + iSecondes + 1 ;

    // edit iHeure
    iHeurs = (nom_sec/3600) ;
    nom_sec -= (iHeurs*3600);

    // edit iMinute
    iMinutes = (nom_sec/60) ;
    nom_sec -= (iMinutes*60);

    // edit seconde
    iSecondes = nom_sec ;

}

int num_pair(int n)
{
    return n%2==0?1:0 ;\
}
