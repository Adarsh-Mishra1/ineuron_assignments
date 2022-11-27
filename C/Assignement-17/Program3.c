//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>

int main(){
int i=0,f=0;
char str[7]="adarsh";
while(str[i]!=0){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
      f++;
    }
    i++;
}
printf("%d",f);
return 0;
}
