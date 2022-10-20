#include<stdio.h>
int main(){
    int i,j,n,count=1;
    n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            //if(j>=n-(i-1)&&j<=n+(i-1)){
            if(i==n){
                printf("*");
            }else{
                if(j==1||j==i){
                    printf("*");
                }else{
                    printf(" ");
                }
            }


        }
        printf("\n");
        count=1;
    }

return 0;
}
