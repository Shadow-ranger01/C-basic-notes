#include<stdio.h>

int main(){
   
   int name[24];
   int age;

   printf("\n What is your name?");
   scanf("%s", &name);
   
   // fgets(name,24,stdin); { this is for spaces in main name and sure name }

   printf("\n how old are you?");
   scanf("%d", &age);
   
   printf("\n Hello %s, How are you?", name);
   printf("\n You are %d years old", age);

   return 0;
}
   
  