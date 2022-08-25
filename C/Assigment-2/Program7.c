// Program to find the LSB of any number
#include<stdio.h>
int main(){
    int x=12;
    if(x&1==1){
        printf("Least Significant Bit is 1");
    }else{
        printf("Least Significant Bit is 0");
    }
}
