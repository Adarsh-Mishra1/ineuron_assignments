// Print Fibonacci series for first N terms
// Prime Number between given range
//First N prime Number
#include<stdio.h>
    int prime(int);

    int main(){
        int n=0,a=0,b=1,c=0,i=0;
        printf("Enter the Num:");
        scanf("%d",&n);
        fibo(n);
        return 0;
    }
    void fibo(int n){
            int c=0,a=0,b=1,i=3;
            printf("%d %d",a,b);
            while(i<=n){
                c=a+b;
                a=b;
                b=c;
                printf(" %d",c);
                i++;
            }
            return 0;
    }

