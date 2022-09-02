//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main(){
    int x;
    printf("Please Enter the number");
    scanf("%d",&x);
    if(x%5==0){
        printf("Divisible by 5");

    }else{
        printf("Not Divisible");
    }
    return 0;
}
