/* Assume price of 1 USD is INR 76.23.
Write a program to take the amount in INR and
convert it into USD. */

#include<stdio.h>
int main(){
int amount;
float total;
const rate=76.23;
printf("The rate of conversion is %d \n",rate);
printf("Please Enter the amount ");
scanf("%d",&amount);
total=amount*rate;
printf("Total Rupee:%d ",total);

}
