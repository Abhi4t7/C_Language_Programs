#include<stdio.h>
int tt(int a,int b)
{
printf("Hello\n");
printf("a=%d, b=%d\n",a,b);
return a+b;
}

int main()
{

int (*p)(int ,int);
p=tt;
printf("ans=%d",p(5,6));


}
