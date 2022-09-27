/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
ncr= n!/r!*(n-r)!
*/

#include<stdio.h>

int main(){
    int n,r,value;
    printf("Enter the value of n and r \n");
    scanf("%d%d",&n,&r);
    value=fact(n)/(fact(r)*fact(n-r));
    printf("value=%d",value);
    //printf("\n fact=%d , %d ,%d",fact(n),fact(r),fact(n-r));
}

fact(int n){
 int j=1,fact=1;
 while(j<=n){
 fact = fact*j;
 j++;
 }
 return fact;
}
