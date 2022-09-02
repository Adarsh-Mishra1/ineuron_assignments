// Uppper case and lower case check program

#include <stdio.h>
int main()
{
    char sing_ch;

    printf("Input a character: ");
    scanf('%c', &sing_ch);

   \
    if((sing_ch>='a' && sing_ch<='z'))
    {
        printf("This is an lower case alphabet.\n");
    }
    else if (sing_ch>='A' && sing_ch<='Z') \
    {
        printf("This is a Uppercase.\n");
    }

}
