//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
//Function declaration
int sum(int,int);

int main(){
    int n,p;
    printf("enter the num and pow");
    scanf("%d%d",&n,&p);

    //Function Call
    printf("%d",sum(n,p));
}

int sum(int n,int p){
 if(p==1)
    return n;
 else
    return n*sum(n,p-1);
}


