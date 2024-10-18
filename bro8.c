#include<stdio.h>

int main(){

 char grade;

    printf("\n Enter your grade: ");
    scanf("%c", &grade);

   switch (grade){
      case 'A':
         printf("perfect \n");
          break;
      case 'B':
         printf("You did good! \n");
          break;
      case 'C':
         printf("You did okey! \n");
          break;
      case 'D':
         printf("Do batter next time! \n");
          break;
      case 'E':
         printf("Atleast you passed! \n");
          break;
      case 'F':
         printf("YOU FAILED!!! \n");
          break;
      default:
         printf("please enter only valid grade!! \n");
   }

   return 0;
}