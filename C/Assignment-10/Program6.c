/*Write a function to calculate the factorrial
*/

#include<stdio.h>
//int fact(int);
int main(){
    int n,value;
    printf("Enter the value of n");
    scanf("%d",&n);
    value=fact(n);
    printf("value=%d",value);
    return 0;
}
int fact(int n){
 int j=1,fact=1;
 while(j<=n){
 fact = fact*j;
 j++;
 }
 return fact;
}
