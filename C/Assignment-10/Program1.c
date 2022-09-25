/*Write a program which takes the month number as an input and display
number of days in that month.
 We know Month( 2=28/29 days;1,3,5,7,8,10,12=31 days,4,6,9,11=30 days) */

#include<stdio.h>

int main(){
int month_no;
printf("Please Enter Month as Number");
scanf("%d",&month_no);

switch (month_no){
    case (1):

    case (3):

    case (5):

    case (7):

    case (8):

    case (10):

    case (12):
        printf("31 Days");
        break;
    case (4):
    case (6):
    case (9):
    case (11):
        printf("30 Days");
        break;
    case (2):
        printf("28/29 Days");
        break;
    default:
        printf("Enter any Valid input");

}
return 0;
}
