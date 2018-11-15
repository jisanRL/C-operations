#include <stdio.h>
#include<math.h>
#include<stdbool.h>

//A c program that checks if the year is leap year or not 

int main(){
    int year;
    int days;
    
    printf("Enter Year:\n");
    scanf("%d", &year);
    
    //Leap year is divisible by 4
    //century is leap year if perfectly divisible by 400
    //Leap year is even if divisible by 100
    
    if ((year%4 ==0 && year%100 !=0) || year%400 == 0) {
        printf("This is a leap Year.\n");
    } else {
        printf("This is not a leap Year.\n");
    }
    return 0;
}
