//Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main(){
int a=0,b=1,c=0,n=0,i=1;
printf("Please enter term to find Fibonacci Series :");
scanf("%d",&n);
printf("%d",a);
while(i<n){
    a=b;
    b=c;
    c=a+b;
    printf("\t%d",c);
    i++;
}


return 0;
}
