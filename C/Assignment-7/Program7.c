//Write a program to print all Prime numbers under 100

#include<stdio.h>
int main(){
        int i,j,a,b,flag=0;
        printf("Enter two values");
        scanf("%d%d",&a,&b);
            for(i=a;i<b;i++){
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
