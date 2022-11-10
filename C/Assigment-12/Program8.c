//Write a recursive function to print binary of a given decimal number

#include<stdio.h>
int num(int);

int main(){
    int n;
    printf("Enter the Num");
    scanf("%d",&n);
    printf("%d",num(n));
    return 0;
}

int num(n){
 if(n==0)
    return;
 //else
 return n%2+10*num(n/2);

}

