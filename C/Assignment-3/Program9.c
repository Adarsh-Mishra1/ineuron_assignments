#include<stdio.h>

int main(){
    int a,b,c;
    printf("Please enter the three numbers to compare ");
    scanf("%d%d%d",&a,&b,&c);

    if(c>a&&c>b){
        printf("c is greater");
    }

    if(a>b&&a>c){
        printf(" %d a is greater",a);
    }



    if(b>a&&b>c){
        printf("\n%d b is greater",b);
    }
    if(a==b){
       printf("\n a and b is equal",c);
    }
    if(b==c){
        printf("\n b and c are equal");
    }
    if(a==b==c){
        printf("\n a b and c all are equal");
    }



return 0;
}
