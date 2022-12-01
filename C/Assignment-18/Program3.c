#include<stdio.h>
#include<string.h>
int fun(char);
int main(){
int size;
char str1[7]="aa";
char str2[7]="ZZ";

size=strcmp(str1,str2);
//printf("%d",size);
 if(size < 0) {
      printf("str1 is less than str2");
   } else if(size > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
return 0;
}

