#include<stdio.h>

int main() {

   int i, n, sum = 0;

   printf("input number of terms : ");
   scanf("%d", &n);

   printf("\n The even numbers are : ");

   for(i=1; i <= n; i++){   
      printf("%d ", 2 * i);  // formula of even number finding
      sum += 2 * i;
   }
   
   printf("\n The sum of even Natural number upto %d terms : %d \n", n , sum);
   return 0;
}