#include <stdio.h>
#include <stdlib.h>

//reading from a file

int main() {
    char str;                            //input string
    FILE *fptr;                         //file
    char fileName[50];                  //name of the new file
    
    printf("Input file name\n");
    scanf("%s", fileName);
    
    fptr = fopen(fileName, "r");
    
    if (fptr == NULL) {
        printf("ERROR");
        exit(1);
    }
    
    printf("Content of the file:\n");
    str = fgetc(fptr);                  //get the file
    
    while (str != EOF) {
        printf("%c", str);
        str = fgetc(fptr);
    }
    
    fclose(fptr);
    printf("\n\n");
    return 0;
}
