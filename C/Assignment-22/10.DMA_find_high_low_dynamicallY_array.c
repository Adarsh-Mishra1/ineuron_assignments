//Program to allocate memory by malloc and take n inputs and find sum
#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,largest=0,smallest;
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

    //Stroing first element value to compare from all
    largest=ptr[0];
    smallest=ptr[0];
    for(i=1;i<n;i++){
        /*sum=sum+ptr[i]; or
        if(largest<ptr[i]){
            largest=ptr[i];
        }
        */
        //or
        if(largest<*(ptr+i)){
            largest=*(ptr+i);
        }else{
            smallest=ptr[i];
        }
        
        //if(smallest>ptr[i]){
          //  smallest=ptr[i];
        //}
    }
    printf("largest: %d \t smallest %d",largest,smallest);
    free(ptr);


}
