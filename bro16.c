#include<stdio.h>

void hello (char[], int); // function proto

int main() {
     
     // function prototype

     // What is it?
     // function declaration , w/o a body , before main()
     // ensures that cals to a fuction are made with the correct arguments
     
     // Important nots

     // many C compilers do not cheak for parameter matching
     // missing arguments will result in unexpected behavir
     // A funciton proto causes the compiler to flag an error if argumenst are missing

     // advantages 

     // 1. easier navigation a program w/ main() at the top
     // 2. Helps with debugging
     // 3. commonly used in header files

    char name[] = "Bro";
    int age = 21;

    hello(name, age); 

    return 0;
}

void hello(char name[], int age)
{
   printf("\n Hello %s", name);
   printf("\n You are %d years old", age);
}