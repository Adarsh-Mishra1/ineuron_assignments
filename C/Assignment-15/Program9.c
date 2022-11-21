#include<stdio.h>

void fun();

int main(){
    fun();
    return 0;

}

void fun(){
    int i,j=0,k,temp=0;
    int arr1[5]={14,8,9,10,11};
    int arr2[5]={2,4,6,7,12};
    int arr3[10]={0};

    for(i=0;i<10;i++){
        if(i<=4){
            arr3[i]=arr1[i];
        }else{
            arr3[i]=arr2[j];
            j++;
        }
    }

    for(i=0;i<10;i++){
        printf("%d \t",arr3[i]);
    }


    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
             if(arr3[i]<arr3[j]){

                 temp=arr3[j];
                 arr3[j]=arr3[i];
                 arr3[i]=temp;
             }
        }
    }

    printf("\n");
    for(i=0;i<10;i++){
        printf("%d \t",arr3[i]);
    }
}
