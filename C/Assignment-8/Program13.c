#include<stdio.h>
int main(){
    int i,j,n,count=64;
    n=7;
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
                 printf("%c",count);
                 //count++;
                }

                if(j==n){
                  printf("%c",count+1);
                }

                if(j>n){
                 //count--;
                 printf("%c",count);
                 count--;
                }

            }

        }
        printf("\n");
        count=64;
    }

return 0;
}
