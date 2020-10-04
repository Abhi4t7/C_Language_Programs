#include<stdio.h>
void main()
{
    while(1){
int a,fact=1,i;
printf("Enter the Number = ");
scanf("%d",&a);
for(i=1;i<=a;i++)
fact = fact*i;
printf("factorial = %d",fact);
getch();
printf("\n");
}
}
