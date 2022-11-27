#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[][10]={"g","e","t","a","s"},temp[10]={0};
	for(i=0;i<=3;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(strcmp(str[j],str[i])<0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	for(i=0;i<5;i++)
	printf("%s ",str[i]);
	return 0;
}
