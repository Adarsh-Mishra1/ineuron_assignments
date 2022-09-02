/* Write a program to print the first 10 even natural numbers.*/
#include<stdio.h>
int main(){
    int i=1,j;
    while(i<=10){
        j=2*i;
        printf("\n %d",j);
        i++;
    }
return 0;
}
