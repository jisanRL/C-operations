#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//counting words of a input string 

int main() {
    
    char str[1000];
    int l = 0;
    int i =0;
    int word =1;
    
    printf("Input the string : ");
    gets(str);
    
    printf("Word count\n");
    while (str[i] != '\0') {
        if (str[i]==' ' || str[i]=='\n' || str[i]=='\t') {
            word++;
        }
        i++;
    }
    
    printf("%d \n", word-1);
    return 0;
}
