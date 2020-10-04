#include<stdio.h>
void main()
{
    int i,count=0,num,x,rem,E=1,ans=0,temp,num1,count1;

    printf("Enter any number");
    scanf("%d",&num);
temp=num;
num1=num;
//printf("%d %d\n",temp,num1);
    while(num>0)
    {
        x=num%10;
        count++;
        num=num/10;
    }
    count1=count;
    while(num1>0)
    {

    rem=num1%10;
    //printf("rem=%d \n",rem);
while(count>0)
{
    E=E*rem;
    count--;
   // printf("E=%d\n",E);
}
count=count1;
ans=ans+E;
rem=0;
E=1;
num1=num1/10;

    }
   // printf("%d",ans);
if(ans==temp)
    printf("Armstrong");
    else
    printf("Not armstrong");
}
