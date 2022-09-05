/*Write a program to count digits in a given number.*/
#include<stdio.h>
int main(){
    int j=0,n,num=1;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        if(n>0){
            num++;
        }else{
            break;
        }

    }
    printf("Digits=%d",num);
return 0;
}
