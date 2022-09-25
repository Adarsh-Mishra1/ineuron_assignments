/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */


#include<stdio.h>
int main(){
    int input,bill;
    float plus_bill;
    printf("Give the input");
    scanf("%d",&input);


    switch(input){
    case 1 ... 50:
        bill=input*0.50;
        printf("Total bill=%d",bill);
        plus_bill=bill+bill*20/100;
        printf("Total Bill=%f",plus_bill);
        break;
    case 51 ... 100:
        bill=0.75*input;
        printf("Bill=%d",bill);
        plus_bill=bill+bill*20/100;
        printf("Total Bill=%f",plus_bill);
        break;
    case 101 ... 200:
        bill=1.20*input;
        printf("Bill=%d",bill);
        plus_bill=bill+bill*20/100;
        printf("Total Bill=%f",plus_bill);
        break;



    default:
       printf("Enter correct input");


    }



    return 0;
}
