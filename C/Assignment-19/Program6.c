//6.wap to print the strings which are palindrome inthe list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l=0,j=0,flag=0;
    char str[5][20]={"sandeep","kumar","nitin","santosh","madam"};
    for(i=0;i<5;i++)
    {
        l=strlen(str[i]);
        l=l-1;
        j=0;
        flag=0;
        while(j<l)
        {
            if(str[i][j]!=str[i][l])
            {
                flag=1;
                break;
            }
            j++;
            --l;
        }
        if(flag==0)
        printf("  %s  ",str[i]);
    }
    return 0;
}
