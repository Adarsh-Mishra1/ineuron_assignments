#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char V[8]={'a','e','i','o','u','u','a','e'},freq[150]={0};
	for(i=0;i<8;i++)
	{
		freq[V[i]]++;
	}
	for(i=0;i<150;i++)
	{
		if(freq[i]!=0){

		printf("%c ,%d",i,freq[i]);
		printf("\n");
	}
	}
}

