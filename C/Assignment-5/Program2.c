/* Write a program to print First N Natural Number on the screen */
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(i<=n){
        printf("\n %d",i);
        i++;
    }
return 0;
}
