#include<stdio.h>
int main()
{
	int num,i,j=0;
	printf("Enter number\n");
	scanf("%d",&num);
	for(i=0;i<=31;i++)
	{
		if(num & (1<<i))
			j++;

	}
			printf("set=%d\n",j);

}
