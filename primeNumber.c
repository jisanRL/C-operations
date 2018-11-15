#include <stdio.h>

int main(){
    //prime number
    int n;      //number
    int i;      //iteration 
    int flag=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("False");
    }
    
    for (i = 1; i<n/2; i++) {
        if (n%i == 0) {
            flag = 1;
            break;
        }
    }
    
    if (n==1) {
        printf("A prime number\n");
    } else {
        if (flag == 0) {
            printf("This is a prime number\n");
        } else {
            printf("This is not a prime number\n");
        }
    }

    return 0;
}
