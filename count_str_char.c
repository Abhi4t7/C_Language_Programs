#include<stdio.h>
struct Result
{
int arr[10000];
};

struct Result  count(char* in)
{

	struct Result res = { .arr = {0}};
	int flag=0,i=0;
	while(*in!='\0')
	{

		while(*in!=' ' && *in!= '\0')
		{
			flag++;
			in++;

		}
		res.arr[i]=flag;
		in++;
		flag=0;
	//	printf("%d ",res.arr[i]);
		i++;

	}
return res;

}


int main()
{
	char str[100];
	gets(str);
	int i;
	struct Result ad=count(str);
	for(i=0;i<10;i++)
	{
	 printf("%d ",ad.arr[i]);
	}



}
