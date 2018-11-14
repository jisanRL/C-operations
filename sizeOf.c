#include<stdio.h>

/*
*This program declares 4 variables of type int, float, double and char. 
*Then, the size of each variable is evaluated using sizeof operator.
*/

int main(){
    
    int integer;
    double doub;
    char ch;
    float fl;
    
    printf("Size of int: %ld bytes\n", sizeof(integer));
    printf("Size of double: %ld bytes\n", sizeof(doub));
    printf("Size of char: %ld bytes\n", sizeof(ch));
    printf("Size of float: %ld bytes\n", sizeof(fl));
}
