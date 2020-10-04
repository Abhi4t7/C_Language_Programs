
#include<stdio.h>
void main()
{
    int i,first=-1,second=1,sum=0,num;
    printf("Enter the value");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
       //sum=sum+i;

    sum=first+second;
    first=second;
    second=sum;
    printf("%d ",sum);
    }
    getch();
}
