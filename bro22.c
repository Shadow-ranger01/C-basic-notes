#include<stdio.h> 

int main() {

    // 2D arrays - where each elements is an entire array usefull for martrix,grid  or table data

    /* int num[3][3] = {
                      {1 , 2 , 3 }
                      {4 , 5 , 6 }
                      {7 , 8 , 9 }
                      } */  
    int num [3][3];

    int rows = sizeof(num)/sizeof(num[0]);           // this line is for rows input  
    int columns = sizeof(num[0])/sizeof(num[0][0]);  // this line is for coloum input

    printf("rows : %d\n", rows);                      
    printf("colums : %d\n", columns);

   num[0][0] = 1;     // this are matrix postions inputs 
   num[0][1] = 2;
   num[0][2] = 3;
   num[1][0] = 4;
   num[1][1] = 5;
   num[1][2] = 6;
   num[2][0] = 7;
   num[2][1] = 8;
   num[2][2] = 9;

   for(int i =0 ; i < rows ; i++){          // this for loop will command rows to line
         
         for(int j =0; j < columns ; j++)   // thsi for loop will command to columns to line
         {
            printf("%d ", num[i][j]);       // this is the printing command of matrix
         }
       printf("\n");
   }

    return 0; 
}