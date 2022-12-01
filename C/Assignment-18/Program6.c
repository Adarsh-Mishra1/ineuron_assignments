#include<stdio.h>
#include<string.h>
int fun(char);
int main(){
char* res;
char n;
char str2[7]="ZZ23";
printf("Enter the character to find");
scanf("%c",&n);
res=strchr(str2,n);
    if(res==NULL){
    printf("Not found");
    }else{
    printf("Located at index:%d",res-str2);
    }
return 0;
}

