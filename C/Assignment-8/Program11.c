#include<stdio.h>
int main(){
    int i,j,n,count=65;
    n=5;
    for(i=1;i<=n;i++){
            for(j=1;j<=2*n-1;j++){
                        if(j>(n-i)&&j<(n+i)){
                            if(j==n){
                                printf("%c",count);
                            }else{
                                if(i>=n/2&&j<n){
                                printf("%c",count);
                                count ++;
                                }else{
                                 count--;
                                 printf("%c",count);
                                }

                            }

                        }else{
                            printf(" ");
                            //count++;
                        }

            }
            count=65;
        printf("\n");
    }


return 0;
}
