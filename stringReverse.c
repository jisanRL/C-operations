#include <stdio.h>
#include <string.h>

int main(){
    //reversing a string
    char str[100];
    char temp;
    int i, j, len;
    
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str) - 1;
    
    
    for (i=0; i < strlen(str) /2; i++) {
        temp = str[i];
        str[i] = str[len];
        str[len--] = temp;
    }
    
    printf("Reverse = %s\n", str);
    
    return 0;
}
