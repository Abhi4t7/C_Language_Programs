#include<stdio.h>
void main()
{
int i,start,end,count=0,j;
printf("Enter the number ");
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++)
{
    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    count++;
    }
    if(count<=2)
     printf("%d ",i);
     count=0;
}
}
