// Prime Number between given range
//First N prime Number
#include<stdio.h>
int prime(int);

int main(){
    int a=0,i=0;
    printf("Enter the Initial integers greater than 2:");
    scanf("%d",&i);
    printf("Enter the Last integers :");
    scanf("%d",&a);
    while(i<a){
      if(a==1||a==2){
        printf("Please enter greater than 2");
        break;
      }
      if(prime(i)==1){
            printf("%d \n",i);
            //break;
      }
      i++;
    }
return 0;
}
int prime(int a){
        int i=2;
        while(i<a){
        //printf("i=%d,a=%d",i,a);
            if(a%i==0){
                return 0;
            }
        i++;
        }
        return 1;
}
