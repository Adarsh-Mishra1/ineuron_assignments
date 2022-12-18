#include<stdio.h>
int main(){
    int i,j;
    char str[5][10];
    printf("Enter the 5 string upto 10 characters");
    for(i=0;i<5;i++){
        scanf("%s",&str[i]);
    }

    for(i=0;i<5;i++){
      printf("%s",str[i]);
      printf("\n");
    }
return 0;
}
