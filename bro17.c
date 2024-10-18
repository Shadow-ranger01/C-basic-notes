#include<stdio.h>
#include<string.h>

int main() {
  
    char string1[] = "Bro";
    char string2[] = "Code";

    //strlwr(string1);                 //small letters
    //strupr(string1);                 //CAPITAL LETTERS
    //strcat(string1, string2);        //connects 2 strings
    //strncat(string1, string2, 1);    // how many char will have the next part of sting 
    //strcpy(string1, string2);        // copy str2 to str1
    //strncpy(string1, string2, 1);    // copy char by char

    //strset(string1, '?');        // it convert all the chr in the string and make a simpbol/chr
    //strnset(string1, 'x' ,1);    // converts the number of the the char will chang to who
    //strrev(string1);             // reverse the string

    //int result = strlen(string1);                // 
    //int result = strcmp(string1, string2);       //it will compare with eles and if statement
    //int result = strncmp(string1, string2, 1);   //

    printf("%s", string1);

    return 0;
}