// Find Second Largest Element from array.

#include<stdio.h>

int main()
{

    int arr[9],j,i,temp,greatest=0,s_greatest=0;

    for(i=0; i<9; i++)
    {
        printf("Enter the Element:");
        scanf("%d",&arr[i]);
    }



    for(i=0; i<9; i++)
    {

            if(greatest<arr[i]){
                s_greatest=greatest;
                greatest=arr[i];

            }else{
                if(arr[i]<greatest&&arr[i]>s_greatest){
                   s_greatest=arr[i];

                }
            }


    }
    printf("\nGreatest=%d",greatest);
    printf("\nSecond Greatest=%d",s_greatest);
    /*for(i=0; i<4; i++)
    {
        printf("\n arr[%d]",arr[i]);
    }
    */
    return 0;
}
