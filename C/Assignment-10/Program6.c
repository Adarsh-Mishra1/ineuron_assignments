/*Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid"); */


#include<stdio.h>
int main(){
    int year,y;
    printf("Give the input");
    scanf("%d",&year);
    //x= year % 4 == 0 || year % 400 == 0 && year % 100!==0;
    y = year % 400 == 0 && year % 100 ==!0 || year % 4 == 0;

    switch(y){
    case 1:
        printf("Leap Year");
        break;
    case 0:
        printf("Not Leap Year");
        break;

    default:
        printf("Not Leap Year");
    }
    return 0;
}
