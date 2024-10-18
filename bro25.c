#include<stdio.h>
#include<string.h>

//typedef char user[25];

typedef struct   // in here typedef is giving an existing data type an nickname 
{
    char name[25];
    char password[12];
    int id;
}User;          // this is the nickname of the struct 


int main() 
{
   // typedef - reserved keyword that gives an existing datatype a 'nickename'

    User user1 = {"Bro","password123", 123456789};     // we have a nickname so we dont need to diclear the struct again 
    User user2 = {"bruh", "password321", 987654321};
   
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}