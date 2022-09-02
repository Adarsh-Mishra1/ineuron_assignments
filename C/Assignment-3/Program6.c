//Write a program to print greater between two numbers. Print one number of both are
//the same.

#include<stdio.h>
int main(){
    int x,y;
     printf("Please enter the number");

     scanf("%d%d",&x,&y);
     if(x>y){
        printf("X is Greater");
     }else
     {
        if(x<y){

        printf("Y is greater");
        }
        else{
            printf("Both are equal")
            }
     }
    return 0;
}
