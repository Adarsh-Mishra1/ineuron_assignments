
/*
Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/

#include<stdio.h>

int main(){
int arr[10],i,smallest=0;

// Taking Input Here
for(i=0;i<4;i++){
    printf("Enter the Number");
    scanf("%d",&arr[i]);
}

// Printing Sum
smallest=arr[1];
for(i=0;i<4;i++){
   if(arr[i]<smallest){
        smallest=arr[i];
   }
}
printf("\nsmallest=%d",smallest);

return 0;
}
