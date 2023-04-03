#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,avg;
    int *ptr;
    printf("Enter the size of array ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    
    //Enter the element
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    //average is
    for(i=0;i<n;i++){
        avg=avg+ptr[i];
    }
    printf("Average is: %d",avg/n);
    free(ptr);


}
