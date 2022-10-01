// Copying Array Array1 to Array 2
#include<stdio.h>
#define MAX_SIZE 100
int main(){
int n=0,arr1[MAX_SIZE],arr2[MAX_SIZE],temp,j,i;

    printf("Enter the size of array:");
    scanf("%d",&n);

    // Taking Input Here
    for(i=0;i<n;i++){
        printf("Enter the Number arr1[%d]:",i);
        scanf("%d",&arr1[i]);
    }

    // Copying Content array 1 to array 2
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
            }
    // Display

    for(i=0;i<n;i++){
        printf("arr2[%d]",arr2[i]);
    }
return 0;
}
