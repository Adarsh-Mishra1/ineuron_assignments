//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main(){
    int x;
     printf("Please enter the number");

     scanf("%d",&x);
     if(x>99 && x<1000){
        printf("it is three digit number");
     }else
     {
        printf("It is not three digit number");
     }
    return 0;
}
