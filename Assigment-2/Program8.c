// Program to find even or odd using bitwise operator
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    if(num&1==1){
        printf("Odd Number",num);
    }else{
        printf("Even Number",num);
    }
    return 0;
}
