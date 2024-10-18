#include <stdio.h>

int main(){
    
    // veriables and all in use for geneal purpuses

    int x;        //declaration
    x = 123;      //initialization 
    
    int y=321;    // declaration + initilization 
    
    int age = 21;        // integar
    float gpa = 3.34;    // floating point number
    char grade = 'c';    // single character
    char name[] = "rafi";  // array of chracters

    printf("Hi %s \n", name);
    printf("You are %d years old \n", age);
    printf("Your avrage gread is %c \n", grade); 
    printf("your gpa is %f \n", gpa);
    
    return 0;
}