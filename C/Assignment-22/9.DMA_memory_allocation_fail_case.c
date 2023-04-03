//Program for failure in memory allocation
#include<stdio.h>
#include <stdlib.h>
int main(){
    int *ptr,n;
    printf("Enteer the size to allocate");
    scanf("%d",&n);
    // allocated n block 
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory Allocation is failed");
    }else{
        printf("Memory allocated Successfully of %d bytes",sizeof(ptr));
    }
    free(ptr);
    
}
