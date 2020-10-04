#include"abhi.h"
void search(int arr[],int x)
{
int i,j,temp,key,n;
n=x;
x=x-1;
for(i=0;i<=x-1;i++)
{
for(j=0;j<=x-i-1;j++)
{
if(arr[j]>=arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

}
}

}
for(i=0;i<=x;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
__fpurge(stdin);
printf("Enter the Key\n");
scanf("%d",&key);
binary(arr,n,key);


} 

void binary(int arr[],int n,int key)
{
int b=0;
while(n>=1)
{
n=n/2;
if(key>=arr[n])
{
if(key==arr[n])
{
printf("key is present\n");
b=1;
break;
}
else
{
if(key==arr[n+1])
{
printf("key is present\n");
b=1;
break;
}
}
}
else
{
if(key==arr[n])
{
printf("Key is present\n");
b=1;
break;
}
else
{
if(key==arr[n-1])
{
printf("key is present\n");
b=1;
break;

}
}
}
}
if(b==0)
{
printf("Key is not present\n");
}
}




