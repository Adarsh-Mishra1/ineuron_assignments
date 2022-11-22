//Write a program in C to print or display the lower triangular of a given matrix.
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
    for(j=0;j<=2;j++){
         if(j<=i)
                printf("%d",arr1[i][j]);
            else
              {
                arr1[i][j]=0;
                printf("%d",arr1[i][j]);
              }
    }
    printf("\n");
  }

}
