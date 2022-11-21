//Write a function in C to read n number of values in an array and display it in reverse
#include<stdio.h>
void revers(int Arr[],int n);
int main()
{
  int n=0,Arr[100],i;
  printf("Enter the size of array");
  scanf("%d",&n);
  printf("Enter the elements of array ");
  for(i=0;i<n;i++){
    scanf("%d",&Arr[i]);
  }
    reverse(Arr,n);
    return 0;
}
void reverse(int Arr[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
        printf("%d ",Arr[i]);
    return 0;
}
