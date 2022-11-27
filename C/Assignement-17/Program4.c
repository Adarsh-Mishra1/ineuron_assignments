//Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>

int main(){
int i=0,f=0;
char str[7]="adarsh";
while(str[i]!=0){
    str[i]=str[i]-32;
    printf("%c",str[i]);
    i++;
}

return 0;
}
