#include<stdio.h>

int main() {

    int i, n;
    float s = 0.0;     // Initialize 's' to 0.0 to accumulate the sum.
    
    printf("Input the number of terms : ");
    scanf("%d", &n);

    printf("\n\n");   // Print extra new lines for formatting.

    for(i = 1; i <= n; i++)
    {
       if (i<n)
       {
          printf("1/%d + ", i);  // Print extra new lines for formatting.
          s += 1 / (float)i;
       }
       if (i == n)
       {
          printf("1/%d ", i);   // Print the last term without a plus sign.
          s += 1 / (float)i;
       }
    }
      
    printf("\n Sum of series upto %d terms : %f \n", n, s);

    return 0;
}    





