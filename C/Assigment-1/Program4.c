/*--------Program to Print the area of circle taking input as a radius  -------*/

#include<stdio.h>

void main(){

    float r,a;
    printf("Enter the radius of the circle");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area is : %f",a);
    return 0;

}
