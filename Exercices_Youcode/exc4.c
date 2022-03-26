#include <stdio.h>
#include <stdlib.h>

void alphabet_cns_voyl()
{
    char alph ;
    printf("\nDonnee un alphabet: ");
    scanf("%s",&alph);
   if( alph == 'a' || alph == 'e' || alph == 'o' ||
      alph == 'u' || alph == 'i' || alph == 'A' || alph == 'E' ||
      alph == 'O' || alph == 'I' || alph == 'U')
      printf("L'alphabet qui vous saise est voyelle");
    else printf("L'alphabet qui vous saise est consonne");
}

