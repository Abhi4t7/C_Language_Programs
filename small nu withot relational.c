#include<stdio.h>
void main()
{
    int a=10,b=20,c=30,count=0;
while(a&&b&&c)
{
  a--; b--; c--; count++;
}
printf("smallest number = %d\n",count);

int d=10,e=20,f=30,count1=0;
while(d||e||f)
{
   if(d!=0)
    d--;
   if(e!=0)
    e--;
   if(f!=0)
    f--;
   count1++;
}
printf("Highest number = %d",count1);
}
