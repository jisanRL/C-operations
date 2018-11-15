#include <stdio.h>

int main(){
    //fibonacci sequence 
    
    int n;  //number
    int t1 = 0, t2 = 1;  //term 1 and 2
    int nextTerm = 0;    //t1 + t2
    
    printf("Enter a number:");
    scanf("%d", &n);
    
    printf("Fibonacci: %d, %d,", t1, t2);
    
    nextTerm = t1 + t2;
    
    while (nextTerm <= n) {
        printf(" %d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");
    return 0;
}
