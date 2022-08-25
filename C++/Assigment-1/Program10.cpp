#include <iostream>
using namespace std;

int main(){
   int sum,i;
   int arr[10]={1,3,4,2,4,1,5,6,3,5};
   for(i=0;i<9;i++){
    sum=sum+arr[i];
   }
    printf("sum=%d",sum);
   return 0;
}
