/* Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage. */

#include<stdio.h>
int main(){
    int cp,sp,diff=0;
    float value=0;
    printf("Please Enter the Cost Price and Selling Price ");
    scanf("%d%d",&cp,&sp);


    if(sp>cp){
       printf("Profit");
       diff=sp-cp;
       value=(sp/100)*diff;
       printf("\nProfit Percentage %.2f",value);
    }else{
            if(sp==cp){
                printf("Neither Profit Netiher Loss");
            }else{
                printf("Loss");
                diff=cp-sp;
                value=cp/100*diff;
                printf(" \n Loss Percentage %f",value);
            }

    }
    return 0;
}
