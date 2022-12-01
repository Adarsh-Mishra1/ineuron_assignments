//Palidrome string ex abba same both sides
#include<stdio.h>
#include<string.h>
void fun(char*);
int main(){
int size;
char str1[5]="acca";
fun(str1);
return 0;
}

void fun(char* str){
 int i=0,h;
 h=strlen(str)-1;
 while(i<h){
   if(str[i++]!=str[h--]){
    printf("Not Palidrome ");
    return 0;
   }
 }
  printf("Palidrome");
}

