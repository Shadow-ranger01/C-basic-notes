#include<stdio.h>
#include<stdbool.h>

int main(){

    // logical oprators = && (AND) chacks if two conditions are true
    // logical oprators = || (OR) chacks if atleast one conditions is true
    // logical oprators = ! (NOT) reverses the state of a condition

    float temp;
    bool sunny = true;

    printf(" Enter the temp is: ");       
    scanf("%f", &temp);

    if(temp >= 0 && temp <= 35 && sunny){
        printf("the wather is good!");
    }
    else{
        printf("the wather is bad!");
    }

    return 0;
}