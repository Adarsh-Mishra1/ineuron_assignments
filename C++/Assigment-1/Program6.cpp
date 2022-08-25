//Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;

int main(){
   int a,b,c;
   float avr;
   printf("Enter the a b c");
   scanf("%d%d%d",&a,&b,&c);
   avr=(a+b+c)/3;
   printf("The Average is %f",avr);
   return 0;
}
