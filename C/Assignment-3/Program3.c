// Write a program to check whether a given number is an even number or an odd
number.

#include<stdio.h>
int main(){
    int x;
     printf("Please enter the number");
     scanf("%d",&x);
     if(x%2==0){
        printf("Even Number");
     }else
     {
        printf("Odd Number");
     }
    return 0;
}
