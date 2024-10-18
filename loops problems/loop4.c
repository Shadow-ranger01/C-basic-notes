#include<stdio.h>

int main(){

    int i,n , sum = 0;

    printf("Input value of terms : ");
    scanf("%d", &n);

    printf("\nthe first %d natural numbers are : \n",n); // space management 

    for(i = 1; i<=n ; i++){

        printf("%d ", i);
        sum += i;
    }

    printf("\n The sum of natural numbers upto %d terms : %d \n",n, sum);

}