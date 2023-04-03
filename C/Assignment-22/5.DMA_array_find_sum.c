//Program to allocate memory by malloc and take n inputs and find sum
#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,sum=0;
    int *ptr;
    printf("Enter the size of array ");
    scanf("%d",&n);
    //Taken size of array and allocated n block to this array
    ptr=(int*)malloc(n*sizeof(int));
    
    //Enter the element
    for(i=0;i<n;i++){
    //    scanf("%d",&ptr[i]); 
    //or
        scanf("%d",ptr+i);
    }

    //sum is
    for(i=0;i<n;i++){
        //sum=sum+ptr[i]; or
        sum+=(*ptr+i);
    }
    printf("sum: %d",sum);
    free(ptr);


}
