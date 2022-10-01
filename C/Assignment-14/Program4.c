
/*
Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/

#include<stdio.h>

int main(){
int arr[10],i,greatest=0;

// Taking Input Here
for(i=0;i<4;i++){
    printf("Enter the Number");
    scanf("%d",&arr[i]);
}

// Printing Sum
for(i=0;i<4;i++){
   if(arr[i]>greatest){
    greatest=arr[i];
   }
}
printf("\nGreatest=%d",greatest);

return 0;
}
