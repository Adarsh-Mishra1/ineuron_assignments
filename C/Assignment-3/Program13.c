/* Write a program to check whether a given alphabet is in uppercase or lowercase.. */

#include<stdio.h>

int main(){

int sub,i;
 char ch;

   printf("\nEnter The Character : ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is Not Upper Case Letters");




return 0;
}

