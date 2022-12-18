#include<stdio.h>
#include <string.h>
int main(){
    int i,j;
    char str2[10];
    char str[5][40]={"adarsh@mail.com","mymai@mail.com","testmail","mymail@mail.com","abc@mail.com"
        };
    //printf("%s \t",strchr(str[2],'@'));
    for(i=0;i<5;i++){
      //printf("%s",strcmp(str[i],str2));
      if(strchr(str[i],'@')==0){
        printf("@missing:%s \n",str[i]);
      }
    }
return 0;
}
