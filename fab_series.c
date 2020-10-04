#include<stdio.h>
void main()
{
int a=-1,b=1,c,i,d;
printf("enter the number= ");
scanf("%d",&c);
for(i=1;i<=c;i++)
{
    d=a+b;
    printf(" %d",d);
    a=b;
    b=d;

}
getch();
}
