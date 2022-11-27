//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>

int main(){
int i=0,f=0,l,temp;
char str[7]="ADARSH";
char str2[7]={0};
l=strlen(str);
while(str[i]!=0){
    temp=str[i];
	str[i]=str[l];
    str[l]=temp;
    printf("%c",str[l]);
    i++;
    l--;
}

return 0;
}
