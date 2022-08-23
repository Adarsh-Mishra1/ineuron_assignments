//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number.

#include<stdio.h>
int main(){
int num,x;
printf("Please Enter the Number ");
scanf("%d",&num);
printf("Please Enter the Number to Append ");
scanf("%d",&x);
printf("Original Number %d \n",num);
printf("Number to Append %d \n",x);
num=num*10+x;
printf("Output:%d",num);

}
