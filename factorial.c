#include <stdio.h>

int main(){
    //factorial of numbers
    
    int n;  //number
    int i;  //iterations
    int sum = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
        sum *= i;
    }
    
    printf("Factorial of %d = %d\n", n , sum);
    return 0;
}
