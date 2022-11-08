#include<stdio.h>
int lcm(int,int,int);

int main(){
    int a,b,i=1,res;
    printf("Enter the Two Positive integers");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is %d",a,b,lcm(a,b,i));
    return 0;
}

int lcm(int a,int b,int i){
      i=1;
        while(1){
            if(i%a==0&&i%b==0){
            return i;
            }
        i++;
        }
}
