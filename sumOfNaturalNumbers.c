#include <stdio.h>

int main(){
    //sum oo natural numbers
    
    int i; //iteration
    int n; //number
    int sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i=0; i<=n; i++) {
        sum += i;
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}
