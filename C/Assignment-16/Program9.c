//Sparse Matrix
#include<stdio.h>
int main(){
// Creating 2d arrays
  int i,j,zero=0,non_zero=0;
  int arr1[3][3]={
                  {1,2,3},
                  {4,0,0},
                  {0,0,0}
                 };


  //Printing here
  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
         if(arr1[i][j]==0)
            zero++;
        else
            {
            non_zero++;
            }
    }
    printf("\n");
  }
  zero>non_zero?printf("Sparse Matrix"):printf("Not Sparse Matrix");
}
