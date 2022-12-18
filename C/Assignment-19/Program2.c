#include<stdio.h>
int main(){
    int i,j,vow=0;
    char str[5][10];
    char str2[5][10];
    printf("Enter the 5 string upto 10 characters");
    for(i=0;i<5;i++){
        scanf("%s",&str[i]);
    }

    for(i=0;i<5;i++){
            for(j=i+1;j<5;j++){
                if(strcmpi(str[i],str[j])<0){
                    //printf("%s,%s:%d \t \n",str[i],str[j],strcmpi(str[i],str[j]));
                    strcpy(str2[i],str[j]);
                    strcpy(str[j],str[i]);
                    strcpy(str[i],str2[i]);
            }
        }
    }

    for(i=0;i<5;i++){
        printf("\n%s",&str[i]);
    }

return 0;
}
