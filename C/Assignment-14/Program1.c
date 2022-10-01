/*
Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
*/

#include<stdio.h>

int main(){
int arr[10],i,sum=0;

// Taking Input Here
for(i=0;i<10;i++){
    printf("Enter the Number");
    scanf("%d",&arr[i]);
}

// Printing Sum
for(i=0;i<10;i++){
   sum=sum+arr[i];

}
printf("Sum=%d",sum);
return 0;
}
