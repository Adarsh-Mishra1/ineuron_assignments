//Program to calculate the length of the string using pointer
#include<stdio.h>
int main(){
    char s[]="Adarsh";
    int i=0;
    char *ptr=s;
    //printf("Address:%p \t character:%c\n",ptr,ptr[0]);

    while(ptr[i]!='\0'){
        printf("Pointing :%d ,Address:%d,Element:%c \n",*s+i,s+i,s[i]);
        i++;
    }
    printf("length:%d",i);
}
