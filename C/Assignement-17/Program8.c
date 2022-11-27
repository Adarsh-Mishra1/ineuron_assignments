//Copy one string to another
#include<string.h>
#include<stdio.h>
int main()
{
	char str1[23]="string1";
	char str2[23]="string2";
	printf("before copy of string\n");
	printf("%s %s ",str1,str2);
	strcpy(str1,str2);
	printf("\nafter copy of string \n");
	printf("%s %s ",str1,str2);
	return 0;
}
