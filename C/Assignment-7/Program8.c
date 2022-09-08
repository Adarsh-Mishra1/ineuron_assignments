//Write a program to find next Prime number of a given number
#include<stdio.h>
int main(){
        int i,j,a,flag=0;
        printf("Enter the Number");
        scanf("%d",&i);
            for(i;1;i++){
                //printf("\n i= %d",i);
                flag=0;
                for(j=2;j<=i/2;j++){
                    if(i%j==0)
                        flag=1;

                }
                    if(flag==0){
                    printf("\n%d",i);
                    break;
                    }

            }

    return 0;
}
