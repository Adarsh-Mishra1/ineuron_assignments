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
    int input,output,num;
    printf("Give the input");
    printf("\n 1. Negative ");
    printf("\n 2. Positive");
    scanf("%d",&input);


    switch(input){
    case 1 :
        printf("Enter Negative Number");
        scanf("%d",&num);
        output=num*(-1);
        printf("Result=%d",output);
        break;
    case 2:
        printf("Enter Positive Number");
        scanf("%d",&num);
        output=num*(-1);
        printf("Result=%d",output);
        break;

    default:
       printf("Enter correct input");


    }



    return 0;
}
