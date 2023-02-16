#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int main() {
    int i=0,j,size=0,temp[10];
    char s[10];

    scanf("%s",&s);
    size=strlen(s);
    while(s[i]!='\0'){
        for(j=i;j<strlen;j++){
            if(s[i]==s[j]){
              printf("%c",s[i]);
            }
        }
        i++;
    }



    return 0;
}
