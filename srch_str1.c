#include<stdio.h>
int main()
{

	char str[100],*p;
	int i=0,j=0,count=0;
	printf("Enter string\n");
	gets(str);
	while(str[j]!='\0')
	{
		if(str[i]=='H'&& str[i+1]=='E' && str[i+2]=='L' && str[i+3]=='L' && str[i+4]=='O' && str[i+5]==' ')
		{
			count++;
			i+=5;
		}
		else
		{
			while(str[i]==' ')
			i++;

		}
	i++;
	}
printf("t=%d",count);
}
