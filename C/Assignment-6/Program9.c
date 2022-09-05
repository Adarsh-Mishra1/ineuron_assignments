/* Write a program to calculate LCM of two numbers*/
#include<stdio.h>
int main(){
    int i=2,j,n,m,max,hcf=0;
    printf("Enter the Value of two numbers for LCM :");
    scanf("%d%d",&n,&m);
    max=(n>m)?n:m;
    while(i<=max){
        if (n%i==0 && m%i==0)
        {
            //printf( " The LCM of %d and %d is %d. ", n, m, i);
            hcf=i;
        }
        i++;
    }
    printf("LCM is = %d",(n*m)/hcf);
return 0;
}
