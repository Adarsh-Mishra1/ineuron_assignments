/* Write a program to print the first 10 odd natural numbers*/
#include<stdio.h>
int main(){
    int i=1,j;
    while(i<10){
        j=2*i-1;
        printf("\n %d",j);
        i++;
    }
return 0;
}
