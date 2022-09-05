/* Write a program to reverse a given number.*/
#include<stdio.h>
int main(){
    int i=1,j,n,rev=0;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=n%10;
        n=n/10;
        rev=rev*10+j;
        i++;
    }
    printf("Reverse=%d",rev);
return 0;
}
