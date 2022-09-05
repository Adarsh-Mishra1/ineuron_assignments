/* Write a program to calculate sum of squares of first N natural numbers*/
#include<stdio.h>
int main(){
    int i=1,j,n,sum=0;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=i*i;
        sum=sum+j;
        i++;
    }
    printf("sum=%d",sum);
return 0;
}
