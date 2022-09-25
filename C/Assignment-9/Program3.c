//Write a program which takes the day number of a week and displays a
//unique greeting message for the day.
#include<stdio.h>
int main(){
    int x;
    printf("Enter the day No:");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("Good Day");
            break;
        case 2:
            printf("Good Morning");
            break;
        case 3:
            printf("Have a nice day");
            break;
        case 4:
            printf("Be Consistent");
            break;
        case 5:
            printf("Always aware");
            break;
        case 6:
            printf("Keep Learning");
            break;
        case 7:
            printf(" Thanks");
            break;
        default:
            printf("Please Enter correct input");

    }

return 0;
}
