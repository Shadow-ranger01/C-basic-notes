#include<stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    for( int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)  // this is the loop for using array
    {
      printf("%.2lf \n", prices[i]);   // if [] is i then it will print all the info in the array
    }
    return 0;
}