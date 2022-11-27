//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
int main()
{
	char s[25];
	int i=0,alph=0,digit=0,special=-1;
	printf("enter the string\n");
	fgets(s,25,stdin);
	while(s[i])
	{
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
		alph++;
	    else if(s[i]>='0'&&s[i]<='9')
		digit++;
		else
		{
		printf("Else spec");
        special++;
        }
		   ++i;
	}
	printf("total number of alphabets is %d \n digit is %d \n and special character %d",alph,digit,special);
	return 0;
}
