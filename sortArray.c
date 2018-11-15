#include<stdio.h>

//sorting an array 

int main(){
    
    int sequence[100];
    int len;
    int i, j;   //iterations
    int swap;   
    
    printf("Enter the length of the sequence:  ");
    scanf("%d", &len);
    
    //takes in the sequence and loops through it 
    printf("Enter the sequence:\n");
    for(i=0; i<len; i++){
        scanf("%d", &sequence[i]);
    }
    
    //iterates thorugh the loop 
    for(i=0; i < len-1 ;i++){
        for(j=0;j<len-i-1;j++){                 
            if(sequence[j] > sequence[j+1]){        //if number is greater then the next number 
                swap = sequence[j];                 //first num = swap
                sequence[j] = sequence[j+1];        //first num = next num 
                sequence[j+1] = swap;               //the next num = first num hence swap is complete 
            }
        }
    }
    
    printf("Sorted list in ascending order:\n");
    
    for(i=0; i<len;i++){
        printf("%d ", sequence[i]);     //print the sorted sequence 
    }
    return 0;
}
