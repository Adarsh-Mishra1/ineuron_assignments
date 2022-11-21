//Write a function to sort an array of any size. (TSRS)
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
    for(i=0;i<n;i++){
      printf("%d \n",res[i]);
    }

}

int fun(int arr[], int n){
  int j,i,greatest=arr[0],temp;
  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  return arr;
}
