#include<stdio.h>
void main()
{
    int i,j,temp;
    printf("enter the value of i = ");
    scanf("%d",&i);
   printf("enter the value of j = ");
    //scanf("%d",&i);
    scanf("%d",&j);

    temp = i;
    i=j;
    j=temp;

     printf("value of i = %d%",i);
    printf("\nvalue of j = %d",j);
    getch();
}
