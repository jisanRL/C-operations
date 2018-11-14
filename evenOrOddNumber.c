#include<stdio.h>

//checks whether the number is odd or even 

int main(){
    int num1;
    
    printf("Enter a number:\n");
    scanf("%d", &num1);
    
    if (num1%2 == 0) {
        printf("Number is even\n");
    } else{
        printf("Number is odd.\n");
    }
    return 0;
}
