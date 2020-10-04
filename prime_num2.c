#include<stdio.h>
void main()
{
int i,num,count=0;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    if(num%i==0)
    {
        count++;
    }

}
if(count==2)
    printf("Prime number");
else
printf("Not prime number");
}
