//Write a recursive function to calculate sum of first N natural numbers
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
 return 2*n-1+sum(n-1);
}

//Function Definition
/*
1. let n=3
2. base case n==0
   recursive case return 2*n-1*sum(n-1)

   suppose if n=3
       int sum(3){
         if(n==0)
            return;
         return 2*(3)-1+sum(2); 5,2
        }

        int sum(2){
         if(n==0)
            return;
         return 2*2-1+sum(2); 3,2
        }
        int sum(1){
         if(n==0)
            return;
         return 2*1-1+sum(0); 1,0
        }int sum(1){
         if(n==0) condition is true than return
            return;
         return 2*1-1+sum(0); 1,0
        }



*/

