/* Write a program to print the first 10 odd natural numbers in reverse order.*/
#include<stdio.h>
int main(){
    int i=10,j;
    while(i>=1){
        j=i*2-1;
        printf("\n %d",j);
        i--;
    }
return 0;
}
