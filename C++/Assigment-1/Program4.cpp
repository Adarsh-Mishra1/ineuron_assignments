//Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;

int main(){
   int l,b,h;
   float area=0;
   printf("Enter the length ,breath and height");
   scanf("%d%d%d",&l,&b,&h);

   area=2*( l*b+b*h+l*h );
   printf("The Area is %f",area);
   return 0;
}
