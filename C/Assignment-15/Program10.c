#include<stdio.h>

void fun();

int main(){
    fun();
    return 0;

}

void fun(){
    int i,j=0,k,temp=0,arr1[5]={0};
    int arr3[5]={8,8,9,10,11};

    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
             if(arr3[i]==arr3[j]){
                 arr1[i]++;
                 temp++;
             }

        }
        temp=0;
    }

    for(k=0;k<5;k++){
        printf("Element:%d is %d times \n",arr3[k],arr1[k]);
    }


}
