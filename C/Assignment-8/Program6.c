#include<stdio.h>
int main(){
    int i,j,n;
    n=5;
    for(i=n;i>=1;i--){
        for(j=1;j<=2*n-1;j++){
            //if(j>=n-(i-1)&&j<=n+(i-1)){
            if(j>n-i&&j<n+i){
            //for(j=1;j<=2*n-1;j++){
                printf("*");
            }else{
                printf(" ");

            }
        }
        printf("\n");
    }


return 0;
}
