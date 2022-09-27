/*Write a function to check whether a given number contains a given digit or not.
(TSRS)
*/

#include<stdio.h>
int fact(int,int);
int main(){
    int value,digit;
    printf("Enter the value of number and digit to find \n");
    scanf("%d%d",&value,&digit);
    value=fact(value,digit);
    value==1?printf("Exist"):printf("Not exist");
    //printf("Result=%ch",value==1?value='exist':value='Not Exist');

}

int fact(int value,int digit){
 int comp;
 while(value>=1){
    comp=value%10;
    value=value/10;
    if(comp==digit){
        return 1;
    }
 }
 return 0;
}
