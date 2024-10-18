#include<stdio.h>

int main() {

    int i ,j ,n ,p ,q ;

    printf(" Input number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)  // Loop for the number of rows.
    {
        if (i % 2 == 0)  // If 'i' is even
        {
            p = 1;
            q = 0;
        }
        else    // If 'i' is odd
        {
            p = 0;
            q = 1;
        }
        for(j =1; j <= i; j++)   // Loop for each element in the row.
        {
            if(j%2 == 0)
               printf("%d", p);  // Print 'p' if 'j' is even.
            else
               printf("%d", q);  // Print 'q' if 'j' is odd.
        }
        printf("\n");           // Move to the next line after printing a row.
    }      
    return 0;
}