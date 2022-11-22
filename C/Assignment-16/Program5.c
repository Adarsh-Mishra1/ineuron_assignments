//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main(){
// Creating 2d arrays
  int i,j;
  int arr1[3][3]={
                  {1,2,3},
                  {4,5,6},
                  {7,8,9}
                 };


  //Printing here
  for(i=0;i<=2;i++){
    for(j=2;j>=0;j--){
        if((i==j)){
            printf("%d\t",arr1[i][j]);
        }
    }
    printf("\n");
  }

}
