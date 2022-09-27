//Write a function to print 1 if even else 0 odd (TSRN)
#include<stdio.h>

num(int);

main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Ans=%d",num(n));


}

 num(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
 }
