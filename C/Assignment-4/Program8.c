/* Write a program to print squares of the first 10 natural numbers*/
#include<stdio.h>
int main(){
    int i=1,j;
    while(i<=10){
        j=i*i*i;
        printf("\n %d",j);
        i++;
    }
return 0;
}
