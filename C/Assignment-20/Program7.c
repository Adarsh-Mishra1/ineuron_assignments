//Program to calculate the length of the string using pointer
#include<stdio.h>
int main(){
    char s[]="AdarsA";
    int i=0,upper=0,lower=0;
    char *ptr=s;
    //printf("Address:%d \t character:%c\n",*(ptr+5),*(ptr+5));
    while(ptr[i]!='\0'){
        //printf("var %c",ptr[i]);
        //printf("Address:%d \t character:%c\n",*(ptr+i),*(ptr+i));
        //printf("Pointing :%d ,Address:%d,Element:%c \n",*s+i,s+i,s[i]);
        if((*(ptr+i)>=65)&&(*(ptr+i)<=91)){

            upper++;
        }else{
            lower++;
        }
        i++;
    }
    printf("Upper:%d \t Lower:%d",upper,lower);
}
