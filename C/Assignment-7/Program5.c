//WWrite a program to check whether two given numbers are co-prime
//numbers or not
// Co-Prime numbers which have only 1 as the common factor are called co-prime.


#include<stdio.h>
int main(){
    int a,b,max,i=2,result=1;
    printf("Please enter two number for HCF:");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    while(i<max){
        if(a%i==0&&b%i==0){
            result=0;
        }
        i++;
    }
    if(result==0){
      printf("Not Coprime %d,%d",a,b);
    }else{
      printf("%d and %d is coprime",a,b);
    }

    return 0;
}
