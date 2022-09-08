//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main(){
    int a,b,max,i=1,result=0;
    printf("Please enter two number for HCF:");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    while(i<max){
        if(a%i==0&&b%i==0){
            result=i;
        }
        i++;
    }
    printf("HCF is %d",result);
    return 0;
}
