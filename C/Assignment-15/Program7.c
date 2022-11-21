//Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>
//Function declaration
int fun(int[],int);

int main(){
    int n=0,arr[100],i,*res;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    //Function Call
    res=fun(arr,n);



}

int fun(int arr[], int n){
  int j,i,temp;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        temp++;
      }
    }
  }
  printf("%d",temp);
}
