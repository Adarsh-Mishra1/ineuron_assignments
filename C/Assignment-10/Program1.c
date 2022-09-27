//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

float area(int);
int main(){
    int r;
    printf("Enter the radius of circle");
    scanf("%d",&r);
    printf("Area=%f",area(r));
    return 0;
}

float area(int r){
    float area;
    area=3.14*r*r;
    return area;
}
