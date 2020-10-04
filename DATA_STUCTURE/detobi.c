#include<stdio.h>
int main()
{
int i,j,k;
printf("Enter the decimal number\n");
scanf("%d",&k);
for(i=31;i>=0;i--)
{
j=k>>i;
if(j&1)
printf("1");
else
printf("0");
}




}
