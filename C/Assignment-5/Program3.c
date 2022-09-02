/* Write a program to print the first n natural numbers reverse order*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(n>=1){
        printf("\n %d",n);
        n--;
    }
return 0;
}
