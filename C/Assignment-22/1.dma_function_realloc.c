#include<stdio.h>
#include <stdlib.h>
int main(){
    int i=0,j=2; //i for indexing of str, j for reallocation
    char *str,c;
    str=(char*)malloc(sizeof(char)); //Here allocate one byte to str
    printf("Entert the string");
    while(c!='\n'){
        scanf("%c",&c);
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
        j++;
    }
    str[i]='\0';
    printf("String: %s",str);
    free(str);

}
