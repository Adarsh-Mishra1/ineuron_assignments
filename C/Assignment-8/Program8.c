#include<stdio.h>
int main(){
    int i,j,n,count=1;
    n=4;
    for(i=1;i<=n;i++){
            for(j=1;j<=2*n-1;j++){
                        if(j>(n-i)&&j<(n+i)){
                            if(j==n){
                                printf("%d",i);
                            }else{
                                if(i>=n/2&&j<n){
                                printf("%d",count);
                                count ++;
                                }else{
                                 count--;
                                 printf("%d",count);
                                }

                            }

                        }else{
                            printf(" ");
                            //count++;
                        }

            }
            count=1;
        printf("\n");
    }


return 0;
}
