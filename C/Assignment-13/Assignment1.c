//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>

int sum(int);

int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);
    printf("%d",sum(n));
}

int sum(n){
 if(n==0)
    return 0;
 return n+ sum(n-1);
}
