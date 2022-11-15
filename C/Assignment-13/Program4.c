//Write a recursive function to calculate sum of square of first N natural numbers
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
 if(n==0)
    return;
 return n*n+sum(n-1);
}

//Function Definition
/*
Ex: input=3
    natural number(1*1+2*2+3*3)=14
1. let n=3
2. base case n==0
   recursive case return n*n+sum(n-1)

   suppose if n=3
       int sum(3){
         if(n==0)
            return;
         return 3*(3)+sum(2); 9,2
        }

        int sum(2){
         if(n==0)
            return;
         return 2*2+sum(1); 4,1
        }
        int sum(1){
         if(n==0)
            return;
         return 1*1+sum(0); 1,0
        }int sum(1){
         if(n==0) condition is true than return will be executed
            return;
         return 2*0-1+sum(0);
        }



*/
