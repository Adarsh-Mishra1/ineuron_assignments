//Write a function to find the greatest number from the given array of any size.
#include<stdio.h>
//Function declaration
int fun(int[],int);

int main(){
    int n=0,arr[100],i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    //Function Call
    printf("%d \n",fun(arr,n));
}

int fun(int arr[], int n){
  int i,greatest=0;
  for(i=0;i<n;i++){
    if(arr[i]>greatest){
      greatest=arr[i];
    }
  }
  return greatest;
}
