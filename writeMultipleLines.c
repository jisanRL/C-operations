#include <stdio.h>
#include <stdlib.h>

//program in C to write multiple lines in a text file.

int main() {
    
    FILE *fptr;                     //filepointer
    int i, n;                       //iterations, n= number of lines
    char str[1000];                 //input string
    char fileName[20] = "tst.txt";  //file name
    char str1;
    
    printf("Write number of lines\n");
    scanf("%d", &n);                    //number of lines
    
    fptr = fopen(fileName, "w");        //open file
    
    printf("Enter the lines\n");
    for (i=0; i<n+1; i++) {             //iterate until the end of file
        fgets(str, sizeof str, stdin);  //get the input str
        fputs(str, fptr);               //put the string in the file
    }
    
    fclose(fptr);
    
//    read the file
    fptr = fopen(fileName, "r");        //read file
    
    printf("Content of file\n");
    
    str1 = fgetc(fptr);                 //gets the file and check
    
    while (str1 != EOF) {               //iterate through the file
        printf("%c", str1);             //print the contents
        str1 = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    
    return 0;
}
