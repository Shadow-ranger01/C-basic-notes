#include<stdio.h>

int main(){
    
    char operator;
    double num1;
    double num2;
    double result;

    printf("\n Enter the operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\n Enter the number 1: ");
    scanf("%lf", &num1);

    printf("\n Enter the number 2: ");
    scanf("%lf", &num2); 

    switch (operator){
       case '+':
         result = num1 + num2;
           printf("\n result: %.3lf", result);
             break;
        case '-':
         result = num1 - num2;
           printf("\n result: %.3lf", result);
             break;   
        case '*':
         result = num1 * num2;
           printf("\n result: %.3lf", result);
             break; 
         case '/':
         result = num1 / num2;
           printf("\n result: %.3lf", result);
             break; 
    default:
           printf("%c operator dosen't exist!!!", operator);
        break;
    }   
    return 0;
}