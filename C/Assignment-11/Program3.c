#include<stdio.h>
int prime(int);

int main(){
    int a;
    printf("Enter the  Positive integers greater than 1:");
    scanf("%d",&a);
    if(prime(a)==1){
        printf("Prime Number");
    }else{
        printf("Not Prime");
    }
    return 0;
}
int prime(int a){
      int i=2;
      int result;
      result=1;
        while(i<=a/2){
        //printf("i=%d,a=%d",i,a);
            if(a%i==0){
                result=0;
                break;
            }
        i++;
        }
        return result;
}
