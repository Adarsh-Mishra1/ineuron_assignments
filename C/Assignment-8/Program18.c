#include<stdio.h>

int main(){
    int i,j,n=5;

    //Outer Loop
    for(i=0;i<n;i++){
        for(j=1;j<=2*n-1;j++){
                if(j>=(n-i)&&j<=(n+i)){
                    printf("*");
                }else{
                    printf(" ");
                }

        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(j=1;j<=2*n-1;j++){
                if(j>(n-i)&&j<(n+i)){
                    printf("*");
                }else{
                    printf(" ");
                }

        }
        printf("\n");
    }
    return 0;
}
