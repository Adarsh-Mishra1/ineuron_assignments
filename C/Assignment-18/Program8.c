//word count
#include<stdio.h>
#include<string.h>
void fun(char*);
int main(){
char str1[23]="first sec third";
fun(str1);
return 0;
}

void fun(char* str){
 int i=0,words=1,size=0;
 size=strlen(str);
 while(i!=size){
   if(str[i]==32){
    words++;
   }
   i++;
 }
  printf("Words:%d",words);
}

