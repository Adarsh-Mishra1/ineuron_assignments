// second smallest element in array
#include<stdio.h>

int main(){
int arr[10],temp,j,i;

    // Taking Input Here
    for(i=0;i<9;i++){
        printf("Enter the Number");
        scanf("%d",&arr[i]);
    }

    // Sort array
    for(i=0;i<9;i++){
       for(j=i+1;j<9;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
       }
    }

    printf("Second Smallest=%d",arr[1]);
return 0;
}
