#include <stdio.h>


int main(){
    
    int a,b,c,d;
    int first[10][10], second[10][10], sum[10][10];

    printf("Enter the number of Rows and Columns of Matrix:\n");
    scanf("%d%d", &a, &b);
    
    
    printf("Enter the elements of the First Matrix:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            scanf("%d", &first[c][d]);
        }
    }
    
    printf("Enter the elements of the Second Matrix:\n");
    for (c=0; c < a; c++) {
        for (d=0; d < b; d++) {
            scanf("%d", &second[c][d]);
        }
    }
    
    printf("Sum of Entered Matrices:\n");
    
    for (c=0; c < a; c++) {
        for (d = 0; d < b; d++) {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    return 0;
}
