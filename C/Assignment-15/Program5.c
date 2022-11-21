//Write a function to find the first occurrence of adjacent duplicate values in the array.

#include<stdio.h>
void Array_rotation(int Arr[]);
int main()
{
    int Arr[]={32,20,20,12,70};
    printf("%d",rotation(Arr));
    return 0;
}
void rotation(int Arr[])
{
    int j;
        for(j=0;j<4;j++)
        {
            if(Arr[j]==Arr[j+1]){
                return Arr[j];
            }
        }


    return 0;
}
