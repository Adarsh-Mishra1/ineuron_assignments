/*Write a function to check whether a given number contains a given digit or not.
(TSRS)
*/

#include<stdio.h>
int fact(int);
int main(){
    int value,digit;
    printf("Enter the value of number and digit to find \n");
    scanf("%d",&value);
    fact(value);

    return 0;

}

int fact(int value){
 int i=2,j,flag=1;
 while(i<=value){
    if(value%i==0){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
            }
        }
        if(flag==1){
            printf("\n%d",i);
        }
    }
    i++;
 }
 return 0;
}
