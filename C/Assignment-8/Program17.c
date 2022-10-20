#include<stdio.h>

int main(){
int i,j,n=5;
    for(i=n-1;i>=0;i--){
        for(j=1;j<=2*n-1;j++){
            if(i==n-1){
                printf("*");
            }else{
                if(j==(n-i)||j==(n+i)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

return 0;
}
