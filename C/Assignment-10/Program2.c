/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit */

#include<stdio.h>

int main(){
    int input;
    int a,b,result;
    while(1){
        printf("\nPlease Enter the action to perform (+,-,*,/,exit)");
        printf("\n1.Add (+)");
        printf("\n2.Subtract ");
        printf("\n3.Multiply ");
        printf("\n4.Divide ");
        printf("\n5.exit)");
        scanf("%d",&input);


        // Switch Starts here

        switch(input){
        case 1:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            //result=a+b;
            printf("sum=%d",a+b);
            break;
        case 2:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Ans=%d",a-b);
            break;
        case 3:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Ans=%d",a*b);
            break;
        case 4:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Ans=%d",a/b);
            break;
        case 5:
            exit(0);
        default:
            printf("invalid Choice");

        }
    }
return 0;
}
