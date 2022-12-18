#include<stdio.h>
int main(){
    int i,j,vow=0;
    char str[5][10];
    printf("Enter the 5 string upto 10 characters");
    for(i=0;i<5;i++){
        scanf("%s",&str[i]);
    }

    for(i=0;i<5;i++){
      vow=0;
      for(j=0;j<10;j++){
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'){
              vow++;
            }
      }
      printf("%s : %d vowel",str[i],vow);
      printf("\n");
    }
return 0;
}
