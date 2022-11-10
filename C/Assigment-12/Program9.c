//Write a recursive function to print octal of a given decimal number


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
  num(n / 8);
    printf("%d", n % 8);

}

