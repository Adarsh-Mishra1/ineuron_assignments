//Write a recursive function to print first N natural numbers
#include<stdio.h>

int num(n){
 if(n==0)
    return;
 num(n-1);
 printf("%d",n);

}

int main(){
int n;
printf("Enter the Num");
scanf("%d",&n);
num(n);

return 0;
}
