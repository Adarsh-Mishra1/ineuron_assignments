/* Write a program to Calculate sum of First N Natural Number on the screen */
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum=%d",sum);
return 0;
}
