/* Write a program to check number divisible by 2 and 3. */

#include<stdio.h>

int main(){


 int num;

   printf("\nEnter The num : ");
   scanf("%d", &num);

   if (num%3==0&& num%2==0)
      printf("Divisible by 2 and 3");
   else
      printf("Not divisible");




return 0;
}


