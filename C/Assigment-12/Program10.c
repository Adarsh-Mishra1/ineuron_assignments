//Write a recursive function to print reverse of a given number

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
 int temp;
 if(n==0)
    return;
 temp=n%10;
 printf("%d \t",temp);
 num(n/10);

}

