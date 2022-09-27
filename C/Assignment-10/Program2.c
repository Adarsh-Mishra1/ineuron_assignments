// Program to calculate simple interest
#include<stdio.h>

float si(int,int,int);

int main(){
    int p,r,t;
    printf("Enter the P R T");
    scanf("%d%d%d",&p,&r,&t);
    printf("\n SI=%f",si(p,r,t));


}

float si(int p,int r,int t){
    return (p*r*t)/100;
}
