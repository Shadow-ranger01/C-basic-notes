#include<stdio.h>

int findMax(int x, int y)
{                                                      
   return (x > y) ? x : y;   // shortcut it was a long eles and if funcion now it is in one line
}

int main()
{
   // Ternary oprator - shortcut for if/eles when assigning/returning a value
   // (condition) ? value if true : value if false

   int max = findMax(3,4);

   printf("%d", max);

   return 0;

}