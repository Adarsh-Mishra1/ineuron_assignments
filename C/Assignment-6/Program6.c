/* Write a program to calculate factorial of a number.*/
#include<stdio.h>
int main(){
    int i=1,j=1,n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=j*i;
        i++;
    }
    printf("Factorial= %d",j);
return 0;
}
