#include<stdio.h>
void main()
{
    int num,temp,temp2=0,i;
    printf("enter the number = ");
    scanf("%d",&num);
    while(num!=0){
   // for(i=0;i<=num;i++)
    {
        temp=num%10;
        temp2=temp2*10+temp;
        num=num/10;

       //printf("%d ",temp2);
    }}
    printf("%d",temp2);
}
