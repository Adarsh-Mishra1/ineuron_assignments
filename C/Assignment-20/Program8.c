//Program to calculate the length of the string using pointer
#include<stdio.h>
int main(){
    int s[5]={2,3,4,5,2},size=5,sum=0;
    int i=0,upper=0,lower=0;
    int *ptr;
    ptr=s;
    //printf("Address:%d \t character:%c\n",*(ptr+5),*(ptr+5));
    while(i<size){
        sum+=*ptr;
        i++;
        ptr++;
        printf("ptr:%d\n",ptr);
    }
    printf("Sum=%d",sum);
}
