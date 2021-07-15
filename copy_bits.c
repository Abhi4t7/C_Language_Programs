#include<stdio.h>
int main()
{
int x,y,tex=0,tey=0;
printf("Enter x and y\n");
scanf("%d%d",&x,&y);

tex = ((x >> 5) & 1) << 2;
y &= ~(1 << 2);
y |= tex;

tey = ((x >> 6) & 1) << 3;
y &= ~(1 << 3);
y |= tey;

printf("x=%d,y=%d \n",x,y);





}
