#include <stdio.h>


int main(){
    
    int a,b,c;
    int c1,c2,c3,c4;
    
    printf("Enter two Numbers:\n");
    scanf("%d%d", &a, &b);
    
    c = a + b;      // addition
    c1 = a - b;      //subtraction
    c2 = a * b;      //multiplication
    c3 = a / b;      // division
    c4 = a % b;      // modulus
    
    printf("Sum = %d\n", c);
    printf("Subtraction = %d\n", c1);
    printf("Multiplication = %d\n", c2);
    printf("Division = %d\n", c3);
    printf("Mod = %d\n", c4);
    
    return 0;
}
