#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//a C program to sort a string array in ascending order.

int main()
{
    char str[1000];
    char ch;
    int i, j;       //iterations 
    int len;        //length os string
    
    printf("Input a stirng:\n");
    fgets(str, sizeof str, stdin);
    
    len = strlen(str);
    
    //sorting process;
    for(i=1; i<len;i++){
        for(j=0;j < len-i;j++){
            if(str[j] > str[j+1]){
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    
    printf("sorted string = %s", str );
    return 0;
}
