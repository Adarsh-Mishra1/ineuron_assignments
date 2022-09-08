//Write a program to check whether a given number is an Armstrong number
//or not
#include<stdio.h>

int main(){
    int num,original_num,remainder,ans=0;
    printf("Enter the three digit number :");
    scanf("%d",&num);
    original_num=num;
    while(original_num!=0){
        remainder=original_num%10;
        //printf("\n remainder= %d",remainder);
        ans += remainder*remainder*remainder;
        //printf("\n Cube Ans=%d",ans);
        original_num=original_num/10;


    }

    if(ans==num){
         printf("%d is an Armstrong number.",num);
    }else{
        printf("%d is not an Armstrong number.",num);
    }

}
