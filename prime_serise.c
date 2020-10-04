
#include<stdio.h>
void main()
{
int a,b,k,j,i,count=1;
printf("Enter the number= ");
scanf("%d%d",&a,&b);
for(j=a;j<=b;j++)
{
  for(i=2;i<j;i++)
    {
      if(j%i==0)
      {
      count=0;

    }
    }

    if(count==1 || j==1 )
    {

        printf("%d ",j);
       // count=1;
    }
count =1;
}
}







