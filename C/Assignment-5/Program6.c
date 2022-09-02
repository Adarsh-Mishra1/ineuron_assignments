/* Write a program to print the first n even natural numbers.*/
#include<stdio.h>
int main(){
    int i=1,j,n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=2*i;
        printf("\n %d",j);
        i++;
    }
return 0;
}
