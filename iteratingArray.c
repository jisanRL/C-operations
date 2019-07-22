#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 iterating over an array and accessing array element 
 **/
 
int main(){
    
    int op[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;
    int i;
    int tp = 0;
    
    printf("Enter a target:  \n");
    scanf("%d", &target);
    
    for (i=0; i<target; i++) {
         tp = op[target];
        
    }
    printf("Target number = %d\n", tp);
    return 0;
}
