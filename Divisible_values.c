
#include<stdio.h>
void main()
{
    int num1,i;
    printf("Enter the number");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
    if(num1%i==0)
        printf("%d ",i);
}
