//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>

num(int);

main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    num(n);


}

 num(int n){
    int i=1;
    while(i<=n){
    printf("\n%d",i);
    i++;
    }
 }

