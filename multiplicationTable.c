#include <stdio.h>

int main(){
    //multiplication table

    int n;  //number
    int i;  //iteration;
    
    printf("Enter a Number:");
    scanf("%d", &n);
    
    for (i=0; i<=n; i++) {
        printf("%d x %d  = %d\n", n, i, n*i);
    }
    
    return 0;
}
