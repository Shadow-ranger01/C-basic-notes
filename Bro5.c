#include<stdio.h>

int main(){

    const float PI = 3.14159;               // constant veriable

    float r;                                // veriable
    float c;                                // veriable
    float area;                             // veriable 

    printf("\n Enter r of circle: ");       // first data collector 
    scanf("%f", &r);                        // applying r as user uses

    c=2*PI*r;            // formula
    area= PI*r*r;        // formula

    printf("\n circumficrence: %f",c);     // final results print
    printf("\n area: %f",area);            // final results print

    return 0;
}