#include<stdio.h>
int hcf(int,int);

int main(){
    int a,b,i;
    printf("Enter the Two Positive integers");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}

int hcf(int a,int b){
      int i=1,hcf,greater;
      greater=a>b?a:b;
        while(i<=greater){
            if(a%i==0&&b%i==0){
                hcf=i;
            }
        i++;
        }
        return hcf;
}
