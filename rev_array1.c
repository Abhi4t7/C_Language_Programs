#include<stdio.h>
void main()
{
int arr[]={1,2,3,4,5,6,7,8,9,10};
int i,temp=0,j=0,k=9;
//printf("Enter the array ");
//for(i=0;i<=9;i++)
    {
//scanf("%d ",&arr[i]);
//printf("%d ",arr[i]);
}
while(k>=5)
{
    temp=arr[k];
    arr[k]=arr[j];
    arr[j]=temp;
    j++; k--;
}
for(i=0;i<=9;i++)
   printf("%d ",arr[i]);



}
