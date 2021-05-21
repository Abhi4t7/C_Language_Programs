#include<stdio.h>
#define BIT sizeof(num)*8

int main()
{
	int i,num,j=0,data=0;
	printf("ENter number\n");
	scanf("%d",&num);
	for(i=0;i<=BIT-1;i+=2)
	{
		num|= 1<<i;
		int k=i+1;
		num&= ~(1<<k);

		if(num&1<<j)
			printf("1");
		else
			printf("0");

		j++; 

	}
}
