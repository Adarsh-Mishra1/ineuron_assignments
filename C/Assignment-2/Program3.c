#include<stdio.h>
int main(){
    int num1=12,num2=45,temp=0;

    printf("Number 1: %d \nNumber 2: %d \n",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After Swap: Number1: %d Number2: %d ",num1,num2);
    return 0;
}
