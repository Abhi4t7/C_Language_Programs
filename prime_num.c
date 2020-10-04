
#include<stdio.h>
void main()
{
int a,b=1,k,j,i,c=1;
printf("Enter the number= ");
scanf("%d",&a);
  for(i=2;i<a;i++)
    {
      if(a%i==0)
      {
      c=0;
      //break;
    }
    }

    if(c==1)
        printf("Prime number");
    else
        printf("Not prime number");
}








