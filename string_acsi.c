#include<stdio.h>
int f=0,sum;
int main()
{
	char str[100],*p,*q;
	printf("ENter string");
	scanf("%s",str);
	p=str;
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				f=1;
				break;

			}
		}
		if(f==1)
			break;

	}
	if(f!=1)
	{
		while(*p!='\0')
		{

			sum=sum + (int)(*p);
			p++;
		}
		printf("sum=%d",sum);
		printf("\n not repeated\n");
	}
	else
		printf("%c is repeated\n",str[i]);
}
