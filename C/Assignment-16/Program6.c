//Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main(){
// Creating 2d arrays
  int i,j,row,col;
  int arr1[3][3]={
                  {1,2,3},
                  {4,5,6},
                  {7,8,9}
                 };


  //Printing here
  for(i=0;i<=2;i++){
    row=0;
    for(j=2;j>=0;j--){
            row+=arr1[i][j];
    }
    printf("Row %d=%d\t",i+1,row);

    printf("\n");
  }
  //For sum of columns
  for(i=0;i<=2;i++){
    col=0;
    for(j=0;j<=2;j++){
            col+=arr1[j][i];
    }
    printf("Col %d=%d\t",i+1,col);

    printf("\n");
  }

}
