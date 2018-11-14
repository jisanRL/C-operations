#include<stdio.h>

//program that checks whether the character is a vowel or not 

int main(){
    char c;
    
    printf("Enter a Character:\n");
    scanf("%c", &c);
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("The %c is a Vowel\n", c);
    } else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
         printf("The %c is a Vowel\n", c);
    } else {
        printf("The %c is a consonent\n", c);
    }
    
    return 0;
}
