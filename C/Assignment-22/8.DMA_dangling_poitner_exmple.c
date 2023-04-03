//Program A pointer pointing to a memory location that has been deleted (or freed) is called dangling //pointer
#include<stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    // allocated one block 
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    //Memory is allocated and values is assigned to that location but after that block make free by //free()
    printf("Before Free %d",*ptr);
    free(ptr);
    //After free still the ptr trying to use that location which is freed alread , this is called //dangling poiter
    printf("\n After Free %d",*ptr);
    
}
