#include<stdio.h>

 
double square(double x)     // change void in to double or float for return statement
{
   return x*x ;
}

int man()
{
   double x=square(3.14);
   printf("%lf",x);

   return 0;
}