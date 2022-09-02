/* Write a program to print cube of the first 10 natural numbers*/
#include<stdio.h>
int main(){
    int i=1,j,n;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    while(i<=n){
        j=i*i*i;
        printf("\n %d",j);
        i++;
    }
return 0;
}
