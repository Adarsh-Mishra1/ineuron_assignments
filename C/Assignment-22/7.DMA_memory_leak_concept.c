//Program for memory leak
#include<stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    // allocated one block 
    ptr=(int*)malloc(sizeof(int));
    printf("%p",ptr);
    ptr=NULL;
    //Here our memory address is lost beacuse we didn't free the memory by using free, it can cause //memory leak
    printf(" \n %p",ptr);
    
    

}
