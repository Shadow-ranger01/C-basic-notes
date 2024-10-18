#include<stdio.h>

int main() {
    
    long int n, i, t = 9;

    int sum = 0;

    printf("Input the number or terms : ");
    scanf("%ld", &n);

    for(i= 1; i <= n; i++)
    {
        sum += t;               // Add 't' to the sum.
        printf("%ld   ", t);    // Print the current value of 't'.
        t = t * 10 + 9;         // Update 't' for the next iteration.
    }
    
    printf("\n The sum of the series = %d \n", sum);

    return 0;
}