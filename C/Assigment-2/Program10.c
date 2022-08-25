//a program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
int main(){
int num;
printf("Please Enter the Number");
scanf("%d",&num);
printf("Original Number %d",num);
num=num/10*10;
printf("Output:%d",num);

}
