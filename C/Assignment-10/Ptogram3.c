/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0 */

#include<stdio.h>

int function(int);

int main(){
    int input;
    printf("Enter the Number");
    scanf("%d",&input);
    printf("Result is=%d",logic(input));
    return 0;
}

int logic(int value){
    if(value%2==0){
        return 1;
    }else{
        return 0;
    }
}
