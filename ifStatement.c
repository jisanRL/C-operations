#include<stdio.h>

/**
 * A C program that demnostrated simple if-statment.
 */

int a, b;

int main(){

    printf("Enter two numbers:.\n");
    scanf("%d%d", &a, &b);
    
    if (a < b) {
        printf("%d is less then %d.\n", a, b);
    } else if (a == b) {
        printf("%d is equal then %d.\n", a, b);
    } else {
        printf("%d is greater then %d.\n", a, b);
    }
    return (0);
}


