#include<stdio.h>
int fib(int);
int main()
{
    int i,n=0;
    printf("please enter the terms\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n )
{
   if(n==0||n==1)
   return n;
   else
   return fib(n-1)+fib(n-2);
}
