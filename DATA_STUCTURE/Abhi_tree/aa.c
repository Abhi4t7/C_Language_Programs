#include<stdio.h>
#include<stdlib.h>
#pragma pack(10)
struct abc{
long double  arr[9999999]
	};
int main()
{	
	struct abc  a;
	whie(1)
	{
	new=malloc(sizeof(a));
	if(new==NULL)
	{
	printf("heap full\n");
	}
	}
	printf("size:%d\n",sizeof(a));
}
