//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>

int main(){
int a=0,b=1,c=0,n=0,i=1;
printf("Please enter term to find Fibonacci Series :");
scanf("%d",&n);

if(n == 1){
printf("%d", a);

}else{
    while(i<n){
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    printf("%d",c);
}
return 0;
}
