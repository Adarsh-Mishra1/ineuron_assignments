//Program to calculate the length of the string using pointer
#include<stdio.h>
int main(){
    char s[6]="Adarsh";
    int size=6;
    int i=size-1;
    char *ptr=s;
    //printf("Address:%p \t character:%c\n",ptr,ptr[0]);

    while(i>=0){
        printf("Element:%c\n",*(ptr+i));
        i--;
    }

}
