//Write a recursive function to print first N odd natural numbers in reverse order
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
 printf("%d",2*n-1);
 num(n-1);



}

