#include <stdio.h>
#include <stdlib.h>

void insertion_tab(int n, int A[n])
{
    int i;

    for(i=0; i<n; i++)
            *(A+i) = rand() % 40;
}
