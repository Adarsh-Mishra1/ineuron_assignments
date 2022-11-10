//Write a recursive function to print first N even natural numbers
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
 printf("%d",2*n);



}

