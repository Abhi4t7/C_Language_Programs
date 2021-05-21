#include<stdio.h>

int rec(int num)
{
	if(num==0)
		return 1;

	return num*rec(num-1);
}

int main()
{
	int num;
	printf("Enter num\n");
	scanf("%d",&num);
	printf("%d",rec(num));


}
