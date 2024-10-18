#include<stdio.h>
#include<ctype.h>

int main(){

   char unit;
   float temp;

   printf("\n Is the temprature in (F) or (C)?: ");
   scanf("%c", &unit);

   unit = toupper(unit);    // to upper is a function it can recognize lower case alphabet

   if(unit == 'C'){
      printf("\n Enter the temp in Celcius: ");              // unput 1
      scanf("%f", &temp);                                 
      temp = (temp*9/5) + 32;                                // formula 1
      printf("\n The temp in Fahrenheit: %.2f", temp);       // output 1 
   }
   else if(unit == 'F'){
      printf("\n Enter the temp in Fahrenheit: ");           // unput 2
      scanf("%f", &temp);  
      temp = ((temp - 32)*5)/9;                              // formula 2       
      printf("\n The temp in Celcius: %.2f", temp);          // output 2
   }
   else{
      printf("\n is not a valid unit for measurement");
   }

    return 0;
}