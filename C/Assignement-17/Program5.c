//Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>

int main(){
int i=0,f=0;
char str[7]="ADARSH";
while(str[i]!=0){
    str[i]=str[i]+32;
    printf("%c",str[i]);
    i++;
}

return 0;
}
