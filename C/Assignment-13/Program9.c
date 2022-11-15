//Write a recursive function to count digit
#include<stdio.h>
//Function declaration
int sum(int);

int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);
    //Function Call
    printf("%d",sum(n));
}

int sum(n){
 int res=0;
 if(n==0)
    return;
 return res=res+1+sum(n/10);
}


