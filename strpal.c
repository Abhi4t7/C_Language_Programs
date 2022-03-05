#include<stdio.h>

int main()
{

	char str[20];
	int i,j=0,count=0;;
	printf("Enter string\n");
	gets(str);
	for(i=1;str[i]!='\0';i++)
	{
		if(str[j]==str[i])
		{
			count++;
			continue;
		}
           j=i;
	}

	printf("count=%d",count);
}
