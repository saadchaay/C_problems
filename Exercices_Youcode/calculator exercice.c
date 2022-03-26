#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculator()
{
    char oper;
    float pr_num, dx_num;
    char operat;
    scanf("%c",&operat);
    printf("\nNous avons 4 operateurs, choisissez quel operateur:\n1: Addition(+)\n2: Substraction(-)\n3: Multiplication(*)\n4: Division(/)");
    printf("\nVotre operateur: ");
    scanf("%c",&oper);
    printf("\nMaintenant entrez deux nombres que vous voulez calculer: ");
    printf("\n1 er nombre: ");scanf("%f",&pr_num);
    printf("2 eme nombre: ");scanf("%f",&dx_num);
    switch(oper)
    {
         case('+'):
             printf("L'operator qui vous choisi est '+' donc la somme de ces deux nombres est %g .\n",(pr_num+dx_num));
             break;
         case('-'):
             printf("L'operator qui vous choisi est '-' donc la Subtraction de ces deux nombres est %g .\n",(pr_num-dx_num));
             break;
         case('*'):
             printf("L'operator qui vous choisi est '*' donc la Multiplication de ces deux nombres est %g .\n",(pr_num*dx_num));
             break;
         case('/'):
             if(dx_num != 0)
                   printf("L'operator qui vous choisi est '/' donc la Division de ces deux nombres est %g .\n",(pr_num/dx_num));
             else printf("Oooops!! vous ne pouvez pas diviser par 0!! \n");
             break;
    }
}
