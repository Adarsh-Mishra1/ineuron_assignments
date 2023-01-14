//Program to reverse the array using poiner
#include<stdio.h>
int main(){
    int s[5]={2,3,4,5,6},size=5,sum=0;
    int i=size-1,upper=0,lower=0;
    int *ptr;
    ptr=s;
    //printf("Address:%d \t character:%c\n",*(ptr+5),*(ptr+5));
    while(i>=0){
        printf("Element:%d\n",*(ptr+i));
        i--;
    }

}
