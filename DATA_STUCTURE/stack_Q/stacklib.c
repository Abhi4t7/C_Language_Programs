#include"stack.h"
int tos=0;
#define size 20
int arr[size];

void push(int data)
{
if(tos==size)
{
printf("stack overflow");
return;
}
arr[tos]=data;
tos++;


}


void pop()
{

if(tos==0)
{
printf("stack underflow\n");
exit(1);
}
tos--;
int data=arr[tos];
printf("DATA=%d\n",data);
}


