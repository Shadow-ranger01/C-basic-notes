#include <stdio.h>  // Include the standard input/output header file.

void main() {     
    int i;  // Declare a variable 'i' for the loop counter.
	
    printf("The first 10 natural numbers are:\n");  // Print a message to indicate the output.
	
    for (i=1; i<=10; i++)  // Start a for loop to iterate from 1 to 10.
	{      
		printf("%d ", i);  // Print the current value of 'i'.
	}
	
    printf("\n");  // Print a new line for better formatting.
}