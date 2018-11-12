#include<stdio.h>
#include<string.h>

/**
 * A C program that counts number of words and characters in a input string.
 */

char s[1000];
char ch;               //target character
int i;                //number of character and string
int freq = 0;         //frequecny of the character

int main(){

    printf("Enter a string:\n");
    gets(s);
    //scanf("%s", s);

    printf("Enter the target character:\n");
    scanf("%c", &ch);

    for (i=0; s[i] != '\0'; i++) {
        if (ch == s[i]) {
            freq++;
        }
    }

    printf("Frequency of the %c = %d\n", ch, freq);
    return (0);
}


