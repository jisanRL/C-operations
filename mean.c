#include <stdio.h>
#include <stdlib.h>

//Calculating the mean/avg

int main() {
    int count;      //number of numbers
    int i;          //iterations
    float seq[100];  //the sequence
    float sum = 0.0;//the sum
    float mean;
    
    printf("Enter the number of elements: \n");
    scanf("%d", &count);
    
    while (count < 0 || count > 100) {
        printf("Illegal");
        exit(0);
    }
    
    printf("Enter a sequence: \n");
    for (i=0; i< count; ++i) {
        scanf("%f", &seq[i]);
        sum += seq[i];
    }
    
    mean = (float) sum / count;
    printf("The mean = %.3f\n", mean);
    
    return 0;
}
