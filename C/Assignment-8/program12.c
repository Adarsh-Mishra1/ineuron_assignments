#include<stdio.h>
int main(){
    int i,j,n,count=64,k=0;
    n=4;
    for(i=1;i<=n;i++){
            for(j=1;j<=(2*n-1);j++){
                if(j<=n){
                    if(j>=i&&j<=n){
                        //count++;
                        printf("%c",++count);

                    }else{
                        printf(" ");
                    }
                }else{
                    //printf("k:%d,",k);
                    if(j>n&&j<(2*n-k)){
                        printf("%c",--count);
                        //k++;
                    }else{
                        printf(" ");
                    }
                }



            }
        k++;
        count=64;
        printf("\n");
    }
return 0;
}
