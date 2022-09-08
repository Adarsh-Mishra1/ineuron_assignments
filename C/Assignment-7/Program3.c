//Write a program to check whether a given number is there in the Fibonacci
//series or not.

//Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main(){
int a=0,b=1,c=0,n=0,i=1,flag=0;
printf("Please enter term to find Fibonacci Series :");
scanf("%d",&n);
while(c<n){
    a=b;
    b=c;
    c=a+b;
    //printf("\t%d",c);
    i++;
    if(n==c){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("Fibonacci Number");
}else{
    printf("Not Fibonacci Number");
}

return 0;
}




}
