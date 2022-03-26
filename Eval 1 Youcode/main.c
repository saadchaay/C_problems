#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    float x;
    float y;
}point;

void ex1();
void ex2();
void ex3();

float tran_deg_c(float tmp_en_f);
int trouv_max(int pr_num, int dx_num, int troi_num);
float distance_dx_point(point a, point b);

int main()
{
    char readyQ ;
    int i, num_ex;
    char titles[3][200] = {
        "la transforme en degre Celsius",
        "un maximum entre trois nombres.",
        "la distance entre deux points."
    };

    printf("\t\t|||||||***** WELCOME ON 'YOUCODE-EXERCICE' *****|||||||\n\n");
        printf("\t======> ARE U READY ?? prese 'Y' or 'y' to continue ");
        do {
            scanf("%c",&readyQ);
        }while(readyQ != 'y' && readyQ != 'Y');
        printf("\n\n##### So we have 3 exercices: 'choose your exercice!'\n");

    // Title of the exercices ...
        for(i=0; i<3; i++){
            printf("%d: %s\n",i+1,titles[i]);
        }

    // teste le nombre des exercices
        do{
          printf("\nplease enter number between 1 and 3!\n===> ");
          scanf("%d",&num_ex);
        }while(num_ex < 1 || num_ex >3);
        system("cls");

    printf("\n\t\t*****You chose exercice %d: %s*****\n",num_ex,titles[num_ex-1]);
    stru_ex(num_ex);

    return 0;
}

void ex1()
{
    float f;
    printf("Donne la température en Fahrenheit: ");
    scanf("%f",&f);
    printf("le degré Celsius est: %f", tran_deg_c(f));
}

void ex2()
{
    int pr_num, dx_num, troi_num;
    printf("\nDonner trois numbres positive!!\n");
    printf("First number => ");scanf("%d",&pr_num);
    printf("Second number => ");scanf("%d",&dx_num);
    printf("Third number => ");scanf("%d",&troi_num);
    printf("Le max est: %d", trouv_max(pr_num,dx_num,troi_num));
}

void ex3()
{
    point A,B;
    printf("\nDonne le point A(x,y): \nx = ");
    scanf("%f",&A.x);
    printf("y = ");
    scanf("%f",&A.y);
    printf("Donne le point B(x,y): \nx = ");
    scanf("%f",&B.x);
    printf("y = ");
    scanf("%f",&B.y);
    printf("donc la distance entre A et B c'est: %g",distance_dx_point(A,B));
}

void stru_ex(int num)
{
    int i;
    switch(num)
    {
    case(1):
        ex1();
        break;
    case(2):
        ex2();
        break;
    case(3):
        ex3();
        break;
    }
}


