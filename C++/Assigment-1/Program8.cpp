//Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;

int main(){
   int a,b;
   printf("Enter the a and b");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("The New Value a=%d and b=%d",a,b);
   return 0;
}
