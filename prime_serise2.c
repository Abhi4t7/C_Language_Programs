#include<stdio.h>
void main()
{
int i,num,count=0,j;
printf("Enter the number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
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
