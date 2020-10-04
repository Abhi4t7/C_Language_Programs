#include"abhi.h"
int main()
{
int i,n;
int arr[10];
 n=10;
__fpurge(stdin);
printf("Enter 10 digit array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);

//printf("after inpur%d\n",i);
}
search(arr , n);
return 0;
}
