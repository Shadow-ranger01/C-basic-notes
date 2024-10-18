#include<stdio.h>

int main () {

    int i, j , n;

    printf(" Input the number of rows for this pattern :  ");
    scanf("%d", &n);

    for (i = 0 ; i < n; i++)
    {
        for (j = 1 ; j <= n -i ; j++) // i wass faceing the problem in the condition of this loop 
             printf(" "); 

        for (j = 1 ; j <= 2 * i - 1; j++)
             printf("*"); 

        printf("\n");
    }
   
    return 0;
}