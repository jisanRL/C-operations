#include <stdio.h>

// simple C program that takes the average of 3 numbers
int a, b, c;
float d;

int main()
{
    printf("Enter 3 Numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a < 0 || b < 0 || c < 0) {
        printf("No positive Numbers.\n");
    } else {
        d = (float) (a + b + c)/3;
        printf("%.2f", d);
    }
    return 0;
}
