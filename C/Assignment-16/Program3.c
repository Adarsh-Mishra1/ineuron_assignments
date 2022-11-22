//transpose of matrix.
#include<stdio.h>
int main(){
// Creating 2d arrays
  int i,j;

  int arr2[3][3]={{4,2,1},{2,1,0},{2,1,0}};
  int arr3[3][3];
  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      arr3[j][i]=arr2[i][j];
    }
  }
  //Printing here
  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      printf("%d\t",arr3[i][j]);
    }
    printf("\n");
  }

}
