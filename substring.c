#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// a program in C to extract a substring from a given string.

int main()
{
   char str[100];       //Input string 
   char sstr[100];      //substring 
   int pos;             //postion [pivot] 
   int l;               //length of substring 
   int c = 0;        
   
   printf("Input the string : ");
   fgets(str, sizeof str, stdin);
 
   printf("Input the position to start extraction :");
   scanf("%d", &pos);
   
   printf("Input the length of substring :");
   scanf("%d", &l);
 
   while (c < l) 
   {
      sstr[c] = str[pos+c-1];
      c++;
   }
   sstr[c] = '\0';
 
   printf("The substring retrieve from the string is : %s", sstr);
 
    return 0;
}
