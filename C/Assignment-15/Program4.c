//Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right.
#include<stdio.h>
void rotation(int Arr[],int size);
int main()
{
    int Arr[]={32,20,40,12,70};
    rotation(Arr,5);
    return 0;
}
void rotation(int Arr[],int size)
{
    int d=0,i,j;
    for(i=0;i<2;i++)
    {
        d=Arr[0];
        for(j=0;j<4;j++)
        {
            Arr[j]=Arr[j+1];
        }
            //printf("\n %d",j);
             Arr[j]=d;
    }
    for(i=0;i<5;i++)
        printf("%d ",Arr[i]);
    return 0;
}
