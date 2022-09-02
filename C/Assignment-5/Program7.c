/* Write a program to print the first n even natural numbers in reverse order.*/
#include<stdio.h>
int main(){
    int j,n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(n>=1){
        j=n*2;
        printf("\n %d",j);
        n--;
    }
return 0;
}
