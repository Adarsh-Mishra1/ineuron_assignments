//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main(){
    int i=0,original_num,remainder,ans=0;
    while(i<1000){
        original_num=i;
        ans=0;
        //printf("Original=%d",i);
        while(original_num!=0){
            remainder=original_num%10;
            //printf("\n Remainder=%d",remainder);
            ans += remainder*remainder*remainder;
            //printf("\n Ans= %d",ans);
            original_num=original_num/10;
        }
        if(ans==i){
         printf("\n %d is an Armstrong number.",i);
        }
        //printf("\n \n");
        i++;
    }
return 0;
}
