/* Write a program to calculate sum of first N odd natural numbers.*/
#include<stdio.h>
int main(){
    int i=1,j,n,sum=0;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=2*i-1;
        sum=sum+j;
        i++;

    }
    printf("sum=%d",sum);
return 0;
}
