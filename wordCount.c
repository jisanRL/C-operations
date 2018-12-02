#include <stdio.h>
#include <stdlib.h>

//program in C to count number of words and characters in a file.

int main() {
    
    FILE *fptr;                     //filepointer
    int word = 1, character = 1;    //word and character
    char fileName[20];              //file name
    char str1;
    
    printf("Filename to be opened\n");
    scanf("%s", fileName);
    
    fptr = fopen(fileName,"r");
    
    if (fptr == NULL) {
        printf("FILE IS EMPTY");
    } else {
        str1 = fgetc(fptr);
        printf("Contents are:\n");
        
        while (str1 != EOF) {
            printf("%c", str1);
            if (str1==' ' || str1=='\n') {
                word++;
            } else{
                character++;
            }
            str1 = fgetc(fptr);
        }
        printf("Number of words = %d\n", word-2);
        printf("Number of Character = %d\n", character-1);
    }
    fclose(fptr);
    return 0;
}
