#include<stdio.h>

int main()
{
   int i,j,k,r,x,c;

   printf("enter the number of rows: ");
   scanf("%d",&r);


   for(i=0;i<=r;i++){
       for(j=0;j<i;j++){
           if(i==r){
              printf("*");
           }else{
                if(j==0||j==i-1)
                  printf("*");
                else{printf(" ");
           }

           }
       }
       printf("\n");
    }
    return 0;
}
