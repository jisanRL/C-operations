#include<stdio.h>
#include<string.h>

/**
 * A C program that concatenates input strings.
 */

char s[1000];                //input string 1
char ch[1000];               //input string 2

int main(){

    printf("Enter a string:\n");
    gets(s);

    printf("Enter another string:\n");
    gets(ch);

    strcat(s,ch);
    printf("Concat: %s\n", s);
    return (0);
}


