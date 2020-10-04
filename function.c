#include<stdio.h>
#include<conio.h>
void main()
{
void add(void);
void sub(void);
//clrscr();
add();
printf("\n");
sub();
getch();
}
void add()
{
  int a,b,c;
  printf("Enter the two Numbers = ");
  scanf("%d%d",&a,&b);
  c = a+b;
  printf("Addition = %d",c);
}
void sub()
{

    int a,b,c;
    printf("Enter the two numbers = ");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("sub = %d",c);
}




