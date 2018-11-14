#include <stdio.h>
#include <string.h>

int main(){
    
    char q[1000];                            // the stiring
    char fir;                               // the first character
    char las;                               // the last character
    char randomChar;                        // any random character in the string
    int i;                                  // number of char in the string
    int p;                                  // index randomChar in the string
    
    printf("Enter a String: ");
    gets(q);                                //gets the string, same as scanf
    
    
    printf("The Length of the string = %lu\n", strlen(q));
    
    fir =  q[0];                            //the first character of the string
    printf("The first character of the string = %c \n\n", fir);
    
    //The last character in the String
    for (i=0; i < q[i]; i++) {
        las = q[i];
    }
    printf("The Last character of the string = %c\n\n", las);
    
    //Getting any random charcater from the string
    printf("Enter the index of the character:\n");
    scanf("%d", &p);
    for (i=0; i<q[i]; i++) {
        randomChar = q[i-p];
    }
    printf("The random Character = %c\n", randomChar);
    
    return 0;
}
