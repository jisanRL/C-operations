#include<stdio.h>
#include<string.h>

/**
* A C program that counts the length of the input String.
*/


char s[1000];                           // limit of the string 

int main(){
    
    printf("Enter a string:\n");
    scanf("%s", s);                     //input string 
    
    int len = strlen(s);                //calculates the length of the string 
    
    printf("Length of the String: %d\n", len);
    
    return (0);
}
