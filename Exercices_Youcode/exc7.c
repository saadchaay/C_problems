#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void trv_racine_eq()
{
    int a, b, c;
    printf("\nDonner les valeur de a, b et c:\n");
    printf("a = ");scanf("%d",&a);
    printf("b = ");scanf("%d",&b);
    printf("c = ");scanf("%d",&c);
    float delta = (pow(b,2)-(4*a*c));
    if(delta < 0 )
        printf("ERROR !! this equation has not a solution");
    else if(delta == 0)
        printf("this equation has one solution that is: X = %g",(float)(-b)/(2*a));
        else printf("this equation has two solution, are: X1 = %g and X2 = %g",(float)(-b-sqrt(delta))/(2*a),(float)(-b+sqrt(delta))/(2*a));
}




