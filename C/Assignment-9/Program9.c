/*Program to Convert even number into its upper nearest odd number
Switch Statement. */


#include<stdio.h>
int main(){
    int input,output,num;
    printf("Give the input");
    scanf("%d",&input);


    switch(input%2==0){
    case 1:
        printf("Upper Nearest Odd=%d",input+1);
        break;
    case 0:
        printf("Upper Nearest even=%d",input+1);
        break;

    default:
       printf("Enter correct input");


    }



    return 0;
}
