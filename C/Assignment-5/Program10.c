/* Write a program to print a table of n.*/
#include<stdio.h>
int main(){
    int i=1,j,n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=10){
        j=n*i;
        printf("\n %d",j);
        i++;
    }
return 0;
}
