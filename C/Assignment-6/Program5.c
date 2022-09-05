/* Write a program to calculate sum of cubes of first N natural numbers*/
#include<stdio.h>
int main(){
    int i=1,j,n,sum=0;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=i*i*i;
        sum=sum+j;
        i++;
    }
    printf("%d",sum);
return 0;
}
