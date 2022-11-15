//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
//Function declaration
int sum(int,int);

int main(){
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    //Function Call
    printf("%d",sum(a,b));
}

int sum(int a,int b){
 if(b==0)
    return a;
 return sum(b,a%b);
}

// imp: return 0 and return both are same


//Function Definition
/*
Ex: input=3
    natural number(3*2*1)=7
1. let n=3
2. base case n==0
   recursive case return n*sum(n-1)

   suppose if n=3
       int sum(3){
         if(n==0)
            return;
         return 3*sum(2); 3,2
        }

        int sum(2){
         if(n==0)
            return;
         return 2*sum(1); 2,1
        }
        int sum(1){
         if(n==0)
            return;
         return 1*sum(0); 1,0
        }int sum(1){
         if(n==0) condition is true than return will be executed
            return;
         return n*sum(n-1);
        }
*/
