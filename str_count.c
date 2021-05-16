#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[100],*p,str[10],*q;
	int i,count=0,flag=1,j;
	printf("Enter str\n");
	gets(arr);
	printf("Enter str to cmp\n");
	gets(str);
	p=arr;
	q=str;
	while(*p!='\0')
	{
		if(*p==*q)
		{
			while(*q!='\0')
			{
				if(*p==*q && *q!='\0')
				{
					p++;q++;
				}
			}

		}
		if(*p==' ' || *p=='\0' && *q=='\0')
			count++;
		else
		{
			while(*p!=' ')
			{
				p++;
				if(*p=='\0')
					break;
			}
		}
		p++;
		q=str;

	}
	printf("count=%d\n",count);
}
