#include<stdio.h>
#include<math.h>

int main(){
    
    float a;
    float b;
    float c;

    printf("enter side a: ");     // printng of first data
    scanf("%f", &a);              // input

    printf("enter side b: ");     // 2nD data
    scanf("%f", &b);              // input

    c= sqrt(a*a + b*b);           // fourmula

    printf("Side c: %f", c);      // ans output and screening of c

    return 0;
}