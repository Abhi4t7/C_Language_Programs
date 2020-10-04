#include<stdio.h>
int main()
{
    int a=7,b=10,c;
   // printf("Enter the values = ");
   // scanf("%d%d%,&a,&b);
   //without using third variable
    c=a+b;
    a=c-a;
    b=c-b;
    // using third variable
    c=b;
    b=a;
    a=c;
    printf("a=%d b=%d",a,b);

}
