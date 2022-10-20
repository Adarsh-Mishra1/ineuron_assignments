#include<stdio.h>
int main(){
    int i,j,fcol=0,lcol=20;
    // The number of start in column is 13(Heart Shape)
    for(i=0;i<=3;i++){
    // We have 18 columns
        for(j=0;j<=20;j++){
            if(i<4){
                if(j>=(3-i)&&j<=(7+i)||j>=(12-i)&&j<=(17+i)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    for(i=1;i<=10;i++){
    // We have 18 columns
        for(j=1;j<21;j++){
                if(j>i&&j<22-i){
                    printf("*");
                }else{
                    printf(" ");
                }
        }

        printf("\n");
       // printf("i:%d",i);
    }
return 0;
}
