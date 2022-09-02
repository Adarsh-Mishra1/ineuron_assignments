/* Write a program to take a three-digit
 number from the user
 and rotate its digits by
one position towards the right. */

#include<stdio.h>
int main(){
 int num,temp=0,result=0,i=3;
 printf("Please Enter the number ");
 scanf("%d",&num);
 while(i>0){
    //printf("%d",num);
    temp=num%10;
    num=num/10;
    result=result*10+temp;
    i--;
 }
 printf("Answer is:%d",result);

}

