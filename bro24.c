#include<stdio.h>
#include<string.h>

struct Player 
{
    char name[12];
    int score;
};


int main() 
{
    // struct - collection of related members ('veriables')
    //          they can be of different date types
    //          listed under one name in a block of memeory
    //          VERY SIMILER to classes in other language (but no methods)

    struct Player player1;        // to into the struct command in the main code
    struct Player player2;
    
    strcpy(player1.name, "Bro");  // this struct command is collecting scores 
    player1.score = 4;            // inputing the score
 
    strcpy(player2.name, "Bra");  // this struct command is collecting scores 
    player2.score = 5;            // inputing the score
 
    printf("%s\n", player1.name);
    printf("%d\n", player1.score);   
    
    printf("%s\n", player2.name);
    printf("%d\n", player2.score);  

    return 0;
}