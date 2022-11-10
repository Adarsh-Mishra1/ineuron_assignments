//Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
int num(int);

int main(){
int n;
printf("Enter the Num");
scanf("%d",&n);
num(n);

return 0;
}

int num(n){
 if(n==0)
    return;
 num(n-1);
 printf("%d \t",n*n);




}

