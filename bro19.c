#include<stdio.h>
#include<string.h>

int main()
{
    // while loop - repeats a section of code possibly unlimited times
    // WHILE some sondition remains true
    // a while loop night not execute at all

    char name[25];

    printf("\n What's your name ?: ");
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0';
    
    while (strlen(name) == 0)         // loop funcion and its condition 
    {   
       printf("\n name day hala");
       printf("\n What's your name ?: ");
       fgets(name, 25, stdin);
       name[strlen(name) -1] = '\0';
    }
    
    printf("Hello %s", name);

    return 0;
}