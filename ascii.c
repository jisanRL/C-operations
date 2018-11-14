#include<stdio.h>

/*
* In C programming, a character variable holds ASCII value (an integer number between 0 an 127) rather than character itself
* Finding the ASCII value of a character
*/

int main(){
    char c;
    
    printf("Enter a character:\n");
    scanf("%c", &c);
    
   
    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}
