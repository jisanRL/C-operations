#include <stdio.h>
#include <stdlib.h>

int main(){
    //write a sentence to a file
    
    char a[1000];
    FILE *fptr;
    
    fptr = fopen("program.txt", "w");   //open file program.txt in w mode
    if (fptr == NULL) {
        printf("ERROR!\n");
        exit(1);
    }
    
    printf("Enter a sentence\n");
    gets(a);                        //gets the sentence
    
    fprintf(fptr, "%s", a);         //prints in the file
    fclose(fptr);                   //close the file 
    
    return 0;
}
