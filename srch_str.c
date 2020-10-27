#include<stdio.h>
#include<stdlib.h>
int main()
{
   char	str[100],*p,*q;
	int i=0,count=0,j,flag=0;
	printf("Enter string");
	gets(str);
	p=str;
	q=str;
	while(*q!='\0')
	{
		if(*p=='H' || *p=='h')
		{
			p++;
			if(*p=='E'|| *p=='e')
			{
				p++;
				if(*p=='L' || *p=='l')
				{
					p++;
					if(*p=='L'|| *p=='l')
					{
						p++;
						if(*p=='O' || *p=='o')
						{
							p++;
							if(*p==' ' || *p=='\0')
							{
								count++;
							}
							else
							{
								flag=1;
							}

						}
						else
						{
							flag=1;
						}

					}
					else
					{
						flag=1;
					}

				}
				else
				{
					flag=1;
				}

			}
			else
			{
				flag=1;
			}


		}
		else
		{
			flag=1;
		}
	q++;

	if(flag==1)
	{
	while(*q==' ')
	q++;
	}
	p=q;
}
printf("count=%d",count);

}
