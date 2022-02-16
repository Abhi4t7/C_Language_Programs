#include<stdio.h>

int find_sm(int *arr,int size)
{
	int ret;
	if(size==0)
		return arr[0];

	ret=find_sm(arr,size-1);
	if(arr[size]>ret)
		ret=arr[size];

	return ret;




}



int main()
{
	int arr[]={5,4,3,6,7,8,2,1};
	int size=*(&arr+1)-*(&arr);
	printf("small_num=%d",find_sm(arr,size-1));
}
