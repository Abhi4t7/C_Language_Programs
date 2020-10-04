// Takes something returns nothing
#include<stdio.h>
#include<conio.h>
 void add(int a, int b);
void main()
{
   // add(a,b);
    int x,y;
    //void add(int,int);
    printf("enter the two numbers");
    scanf("%d%d",&x,&y);
    add(x,y);
    getch();
}
 void add(int a ,int b)
{
    int c;
c = a+b;
printf("addition = %d",c);
}
