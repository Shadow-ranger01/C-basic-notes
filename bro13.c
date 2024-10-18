#include<stdio.h>

void birthday(char name[], int age) // data type in () is called perameter for identyfying
{
   printf("\n Happy birthday dear %c", name);
   printf("\n You are %d years old!", age);
}

int main()    
{
   char name[] = "rafi";
   int age = 21;

   birthday(name,age); // () inside this is called argument and it is used by void

   return 0;
}