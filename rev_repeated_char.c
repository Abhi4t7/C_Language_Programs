#include<stdio.h>
int main()
{

	char ch[20];
	int i=0;
	gets(ch);
	printf("%s\n",ch);
	char *p=ch,*q;
	while(*p!='\0')
	{

		if(*p==*(p++))
		{
			*q=*p;
			while(*q!='\0')
			{
			q[i]=q[i+1];
			q++;
			i++;
			}
		}

		p++;
	}

	puts(ch);


}
