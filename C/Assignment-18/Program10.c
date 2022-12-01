/* C program to count frequency of characters in a string */

#include <stdio.h>
#include <string.h>


int main()
{
    char str[10];
    printf("Enter any string: ");
    gets(str);
    fun(str);

}


void fun(char str[]){
    int len, i,j, index, wordEnd, count;
    char str2[10]={0};
    len   = strlen(str);
    count=1;

    // Start checking of words from the end of string
    wordEnd = len - 1;
    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        for(j=i+1;j<=wordEnd;j++){
            if(str[i]==str[j]){
                //printf("%c \n",str[i]);
                count++;
                str2[count]=str[i];
            }
        }
    }


    printf("Original string \n%s\n\n", str);
    for(i=0;i<=wordEnd;i++){
            if(str2[i]!=0){
                printf("\n Freq:%d Char:%c",i,str2[i]);
            }
    }
    return 0;
}

