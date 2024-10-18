#include<stdio.h>

int main() {

    int i, n, sum = 0;

    printf("input number of terms : ");
    scanf("%d", &n);
    printf("\n The odd numbers are : ");

    for (i = 1; i <= n; i++) {

        printf("%d ", 2 * i - 1);
        sum += 2 * i - 1;                 // this is the main formul for this code remember this
    }
    
    printf("\n The sum of odd natural number upto %d terms : %d \n", n, sum);
    return 0;
}   