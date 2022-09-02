//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main(){
    int b=0,a=0,c=0,d;
    printf("Please enter the values of a ,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;

    if(d>0){
        printf("Roots are real and distinct");
    }else{
        if(d==0){
            printf("Roots are real and Equal");

        }else{
            printf("Roots are imaginary");
        }
    }


}
