//Write a program to print all Prime numbers under 100

#include<stdio.h>
int main(){
        int i,j,flag=0;
            for(i=2;i<100;i++){
                //printf("\n i= %d",i);
                flag=0;
                for(j=2;j<=i/2;j++){
                    if(i%j==0)
                        flag=1;

                }
                    if(flag==0)
                    printf("\n%d",i);
                   // break;
            }

    return 0;
}
