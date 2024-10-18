#include<stdio.h>

int main(){
    
    int i, n, sum = 0;
    float avg; 

    printf("input the 10 number : \n");

    for( i = 1; i <= 10; i++ )
    {
        printf("Number-%d: ", i);
        scanf("%d", &n);
    }
    avg = sum / 10.0;

    printf("\n The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);
    return 0;
}