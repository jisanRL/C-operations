#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//a program in C to count total number of alphabets, digits and special characters in a string.

int main() {
    
    char str[1000];
    int alphabet, digit, specialChar;
    int i =0;                           //count
    
    printf("Enter words\n");
    fgets(str, sizeof str, stdin);
    
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabet++;
        } else if(str[i] >= '0' && str[i] <= '9'){
            digit++;
        } else {
            specialChar++;
        }
        i++;
    }
    
    printf("Alphabets = %d\n", alphabet);
    printf("Specail characters = %d\n", specialChar);
    printf("Digits = %d\n", digit);
    return 0;
}
