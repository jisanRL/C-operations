#include <stdio.h>
#include <stdlib.h>

int main(){
    // reading from a file
    char c[1000];
    FILE *fptr;                                            //file pointer
    
    //file is read using opening mode "r"
    if ((fptr = fopen("program.txt", "r")) == NULL) {     //if file program.txt is empty print error
        printf("ERROR!");
        exit(1);                                          //program exits
    }
    
    fscanf(fptr, "%[^\n]", c);                            //reads text until new line, ie the first line 
    printf("Data from the file: %s\n", c);                //output
    fclose(fptr);                                        
    
    return 0;
}
