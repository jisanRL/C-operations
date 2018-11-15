#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//pythagoras theorem 
int main()
{
    int len1;
    int len2;
    int sqr;
    float hyp;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &len1, &len2);
    
    if(len1 < 0 || len2 < 0){
        printf("Put a positive numbers\n");
        exit(0);
    }
    
    sqr = pow(len1, 2) + pow(len2, 2);
    hyp = (float) sqrt(sqr);
    
    printf("Pythagoras = %.2f \n", hyp);

    return 0;
}
