//Write a recursive function to print first N natural numbers in reverse order
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
 printf("%d",n);
 num(n-1);


}
