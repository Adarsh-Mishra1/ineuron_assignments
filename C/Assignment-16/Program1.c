//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main(){
// Creating 2d arrays
  int i,j;
  int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int arr2[3][3]={{4,2,1},{2,1,0},{2,1,0}};
  int arr3[3][3];
  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
  //Printing here
  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      printf("%d",arr3[i][j]);
    }
    printf("\n");
  }

}
