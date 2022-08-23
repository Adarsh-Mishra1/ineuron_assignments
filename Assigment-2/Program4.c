//Program to swap two varaibles without using third variable

#include<stdio.h>
int main(){
int num1=24,num2=45;
printf("Num 1: %d Num2: %d\n",num1,num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("After Swap\n");
printf("Num1: %d, Num2: %d",num1,num2);

return 0;
}
