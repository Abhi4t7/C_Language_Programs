#include<stdio.h>
#define size sizeof(unsigned int)*8
int main()
{
unsigned int num,rev=0;
	int pos=size-1;
	printf("Enter number\n");
	scanf("%d",&num);
	while(pos>=0 && num)
	{
		if(num &1)
		{
		   rev|= 1<<pos;
		}
	num=num>>1;
	pos--;
	}
	printf("rev=%lu\n",rev);
}
