#include<stdio.h>

int main(){
    int i,j,k,n=5;
    // For Outer loop

    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
          if(i==5){
            printf("*");
          }else{
            if(i==j||j==1){
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
