
/*
Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/

#include<stdio.h>

int main(){
int arr[10],i,odd_sum=0,even_sum=0;

// Taking Input Here
for(i=0;i<4;i++){
    printf("Enter the Number");
    scanf("%d",&arr[i]);
}

// Printing Sum
for(i=0;i<4;i++){
   if(arr[i]%2==0){
    even_sum = even_sum+arr[i];
   }else{
    odd_sum = odd_sum+arr[i];
   }
}
printf("\nEven Sum=%d",even_sum);
printf("\n Odd Sum=%d",odd_sum);
return 0;
}
