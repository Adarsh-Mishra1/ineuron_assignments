//Program to swap two variables using pointer function
#include<stdio.h>
void swap(char*,char*);
int main(){
char a[5]={'a','s','d','f'},b[5]={'p','q','r','s'};
printf("Before Swap :a=%s,b=%s\n",a,b);
printf("after swap: ");
//Beacuse a,b holds the adress of array
swap(a,b);
printf("a=%s,b=%s\n",a,b);
}

void swap(char *x,char *y){
    int t;
    while(*x!=0){
        t=*x;
        *x=*y;
        *y=t;
        x++;
        y++;
    }

}
