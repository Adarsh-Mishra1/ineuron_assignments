/* Write a program to check whether a given number is positive, negative or zero.*/

#include<stdio.h>

int main(){
    int num;
    printf("\nEnter The num : ");
    scanf("%d", &num);

    if (num>0)
      printf("Positive");
    else
        if(num<0){
            printf("Negative");
        }else{
            printf("zero");
        }
return 0;
}


