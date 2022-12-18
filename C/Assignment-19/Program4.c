#include<stdio.h>
int main(){
    int i,j;
    char str2[10];
    char str[5][10]={"Delhi","Up","Noida","Lucknow"
    };
    printf("Enter the string to find :");
    gets(str2);


    for(i=0;i<5;i++){
      //printf("%d",strcmp(str[i],str2));
      if(strcmp(str[i],str2)==0){
        printf("String Found:%s",str[i]);
      }

    }
return 0;
}
