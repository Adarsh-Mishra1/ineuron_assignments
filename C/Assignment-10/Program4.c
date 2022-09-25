//Write a program which takes the day number of a week and displays a
//unique greeting message for the day.
#include<stdio.h>
int main(){
    int x,y,z,input;
    printf("Choose Option:");
    printf("\n 1.Equilateral Triangle");
    printf("\n 2.Isosceles Triangle");
    printf("\n 3.Right Angled  Triangle");
    scanf("%d",&input);

    switch(input){
        case 1:
            printf("\nEnter three Sides of Equilateral Triangle");
            scanf("%d%d%d",&x,&y,&z);
            if(x==y&&y==z){
                printf("\nit is Equilateral Triangle");
            }else{
                printf("\nNot Equilateral Triangle");
            }
            break;
        case 2:
            printf("Enter three Sides of Isosceles Triangle");
            scanf("%d%d%d",&x,&y,&z);
            if(x==y||y==z||z==x){
                printf("\nit is Isoceles Triangle");
            }else{
                printf("\nNot Equilater Triangle");
            }

            break;
        case 3:
            printf("Enter three Sides of right Angeled Triangle");
            scanf("%d%d%d",&x,&y,&z);
            if((x*x==y*y+z*z)||(z*z==y*y+x*x)||(y*y==x*x+z*z)){
                printf("\nRight Angeled triangle");
            }else{
                printf("\nNot Right Angeled");
            }
            break;
        default:
            printf("Please Enter correct input");
    }

return 0;
}
