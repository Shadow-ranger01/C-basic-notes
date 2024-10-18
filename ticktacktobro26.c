#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> 
#include<time.h>

 char board[3][3];                // global veriable
 const char PLAYER = 'X';        // char veribale for palyers the 'X' can be enything
 const char COMPUTER = 'O';

 void resetBoard();
 void printBoard();
 int cheakFreeSpaces();
 void playerMove();
 void computerMove();
 char checkWinner();
 void printWinner(char);

 int main()
 {
    char winner = ' ';   // if the winner is an empty space then there is no winner yeat

    resetBoard();

    while (winner == ' ' && cheakFreeSpaces() != 0)
    {
        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ' || cheakFreeSpaces() == 0)
        {
           break;                           // this break will break out the while loop funciton
        }

        computerMove();
        winner = checkWinner();
        if(winner != ' ' || cheakFreeSpaces() == 0)
        {
           break;
        }        
    }

    printBoard();
    printWinner(winner);

    return 0;
 }

 void resetBoard()                   // this function will reset the bord  
 {
    for(int i = 0; i < 3; i++)        // we need nested for loop for this becouse we need a 2D array [i][j]
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';        // when the bord is resat the every space will be blank
        }
    }
 }
 void printBoard()                  // this is the main bord design and we are useing 2D arrays to loacted the location on the bord [columns][rows]
 {
   printf(" %c | %c | %c ", board[0][0], board[0][1] , board[0][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[1][0], board[1][1] , board[1][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[2][0], board[2][1] , board[2][2]);
   printf("\n");  //becouse the design ends here
 }
 int cheakFreeSpaces()
 {
   int freeSpaces = 9;             // number of spaces this function will cheak 

   for(int i = 0; i < 3; i++)      // nested loop for space cheaking and if for the dec
   {
     for(int j = 0; j < 3; j++)
     {
       if(board[i][j] != ' ')     // != ' ' it means there are no free spaces 
       {
          freeSpaces--;           // this is the dec 
       } 
     }
   }
   return freeSpaces;
 }
 void playerMove()               // player movemet function
 {
   int x , y;
   
   do
   {
   printf("Enter row Num(1-3): ");
   scanf("%d", &x);
   x--;   //in array it always starts with 0 , that why dec is important for normal users
   printf("Enter column Num(1-3): ");
   scanf("%d", &y);
   y--; 

   if(board[x][y] != ' ')
   {
      printf("Invalid move!\n");   // if there is no space 
   }
   else
   {
      board[x][y] = PLAYER;       // else there is a space 
      break;                      // to re-do  the prosses again for the do while loop 
   }
   } while (board[x][y] != ' ');  // this do while loop will for if there is no empty space
   
 }
 void computerMove()
 {
    // creates a seed based on current time
    srand(time(0));
    int x,y;

    if(cheakFreeSpaces() > 0)
    {
      do
      {
        x = rand() % 3;                   //this will help to locate free spaces
        y = rand() % 3;
      } while (board[x][y] != ' ');
      
      board[x][y]= COMPUTER;
    }
    else
    {
       printWinner(' ');    
    }
 }
 char checkWinner()     // this will check all winning conditions for the player
 {
    // check rows
    for(int i = 0; i < 3; i++)
    {
       if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
       {
        return board[i][0];
       }
    }
    // check columns
    for(int i = 0; i < 3; i++)
    {
       if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
       {
        return board[0][i];
       }
    }
    // check diagonals no 1
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])    // this will check corners
    { 
       {
        return board[0][0];
       }
    }    
    // check diagonals no 2
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])    // this will check another corners
    { 
       {
        return board[0][2];
       }
    }  
    return ' ';  // still no winner condition 
 }
 void printWinner(char Winner)  // final declaration of the results
 {
    if(Winner == PLAYER)
    {
        printf("YOU WIN!!!");
    }
    else if(Winner == COMPUTER)
    {
        printf("YOU LOSE!!!");
    }
    else
    {
        printf("IT'S A TIE!!!");
    }
 }
