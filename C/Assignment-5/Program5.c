/* Write a program to print the first 10 odd natural numbers in reverse order.*/
#include<stdio.h>
int main(){
    int j,n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(n>=1){
        j=n*2-1;
        printf("\n %d",j);
        n--;
    }
return 0;
}
