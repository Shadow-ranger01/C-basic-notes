#include<stdio.h>

int main(){
   
   int i, sum =0; // sum=0 hotay hobea nahole sum a problem hobve so age age khela kore lagbe

   printf("The first 10 natural num are: \n");

   for (i=1; i<=10; i++){
     
     sum = sum + i;      // formula age hobea the print
     printf("%d ", i);
   }
   
   printf("\n The sum is: %d\n", sum);

   return 0;
}