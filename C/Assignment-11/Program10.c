/* Program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function. */
#include<stdio.h>
    int prime(int);

    int main(){
        int n=0,i=1,res=1;
        printf("Enter the Num:");
        scanf("%d",&n);
        while(i<=n){
                res=res+fact(i)/i;
        i++;
        }
        printf("%d",res);
        return 0;
    }
    int fact(int n){
            int i=1,fact=1;
            while(i<=n){
                fact=fact*i;
                i++;
            }
            //printf("%d",fact);
            return fact;
    }

