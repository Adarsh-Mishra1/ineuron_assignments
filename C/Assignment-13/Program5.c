//Write a recursive function to calculate sum of digit of given numbers
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
 return n%10+sum(n/);
}

//Function Definition
/*
Ex: input=324
    natural number(3+2+4)=9
1. let n=342
2. base case n==0
   recursive case return n%10+sum(n/10)

   suppose if n=342
       int sum(342){
         if(n==0)
            return;
        return 342%10 +sum(342/10); 2,34
        }

        int sum(34){
         if(n==0)
            return;
         return 34%10+sum(34/10); 4,3
        }
        int sum(3){
         if(n==0)
            return;
         return 3%10+sum(3/10); 3,0
        }int sum(1){
         if(n==0) condition is true than return will be executed
            return;
         return n%10+sum(n/10);
        }



*/
