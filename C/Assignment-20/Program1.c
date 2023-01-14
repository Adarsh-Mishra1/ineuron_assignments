//Program to swap two variables using pointer function
#include<stdio.h>

int main(){
int a=10,b=22;
printf("before swap:a=%d,b=%d\n",a,b);
printf("after swap: ");
swap(&a,&b);
printf("a=%d,b=%d\n",a,b);
}

swap(int *x,int *y){
    int t;
    printf("\n fun:%d %d",*x,*y);
    t=*x;
    *x=*y;
    *y=t;

}
