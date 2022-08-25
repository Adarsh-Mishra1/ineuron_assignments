//Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;

int main(){
   int r;
   float area=0;
   printf("Enter the radius r \n");
   scanf("%d",&r);
   area=3.14*r*r;
   printf("The Area is %.3f",area);
   return 0;
}
