//Program to swap two variables using pointer function
#include<stdio.h>
void fun(int*,int);
int main(){
    int a[10]={2,6,3,9,7,5},n=0,i=0;
    printf("Enter the size");
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }
    //fun(&a,n);
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}

void fun(int *x,int n){
    int i,j,temp;
    //printf("%d",x[0]);

    for(i=0;i<n;i++){
         //printf("%d",x[0]);
        for(j=i+1;j<n;j++){
            if(x[i]>x[j]){
               temp=x[i];
               x[i]=x[j];
               x[j]=temp;

            }
            //printf("%d",x[i]);
        }
    }

}
