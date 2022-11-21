//Write a function in C to print all unique elements in an array.
#include<stdio.h>
//Function declaration
int fun(int[],int);

int main(){
    int n=0,arr[20],i,*res;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    //Function Call
    res=fun(arr,n);
    //for(i=0;i<n;i++){
    //  printf("\n %d ",res[i]);
    //}

}

int fun(int arr[], int n){
  int j,i,temp[20];
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      if(arr[i]==arr[j]){
        break;
      }

    }
    if(i==j){
        printf("%d i=%d j=%d",arr[i],i,j);
      }

  }
  return arr;
}
