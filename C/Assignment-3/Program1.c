//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(){
    int x;
    printf("Please Enter the number");
    scanf("%d",&x);
    if(x<0){
        printf("Negative %d",x);

    }else{
        printf("Positive");
    }

    return 0;
}
