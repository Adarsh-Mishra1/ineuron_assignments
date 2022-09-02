/* Write a program to take marks of 5 subjects from the user. Assume marks are given
    out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed. */

#include<stdio.h>

int main(){

int sub,i;
for(i=1;i<=5;i++){
    sub=0;
    printf("\nPlease Enter the subject_%d marks ",i);
    scanf("%d",&sub);
    if(sub>=33){
        printf("\n Pass");
    }else{
        printf("\n Fail");
    }


}

return 0;
}
