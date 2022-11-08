// Print Next prime number
#include<stdio.h>
int prime(int);

int main(){
    int a;
    printf("Enter the  Positive integers greater than 1:");
    scanf("%d",&a);
    //printf("%d :",prime(a));
    while(a>=2){
      if(a==1){
        printf("2");
        break;
      }
      if(prime(a+1)==1){
            printf("%d",a+1);
            break;
      }
      a++;
    }

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
