//  Array in Reverse Order
#include<stdio.h>
#define MAX_SIZE 100
int main(){
int n=0,arr[MAX_SIZE],temp,j,i;

    printf("Enter the size of array:");
    scanf("%d",&n);

    // Taking Input Here
    for(i=0;i<n;i++){
        printf("Enter the Number arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

    // Display in reverse order

    for(i=n-1;i>=0;i--){
        printf("Reverse= :%d",arr[i]);
    }
return 0;
}
