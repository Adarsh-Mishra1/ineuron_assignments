/* Write a program to check whether a given number is a Prime number or
not */
#include<stdio.h>
int main(){
    int i=2,n,result=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            result=0;
            break;
        }
        i++;
    }
    if(result==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }

return 0;
}
