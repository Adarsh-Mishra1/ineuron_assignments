#include<stdio.h>
int main(){
    int i,j,n,count=0;
    n=4;
    for(i=0;i<n;i++){
        for(j=1;j<=2*n-1;j++){
            //if(j>=n-(i-1)&&j<=n+(i-1)){
            if(j>n-i&&j<n+i){
            //for(j=1;j<=2*n-1;j++){
                printf(" ");
                //count++;

            }else{
                if(j<n){
                 count++;
                 printf("%d",count);
                 //count++;
                }

                if(j==n){
                  printf("%d",n);
                }

                if(j>n){
                 //count--;
                 printf("%d",count);
                 count--;
                }

            }

        }
        printf("\n");
        count=0;
    }

return 0;
}
