#include<stdio.h>

int main()
{
int num,i;
while(1){
printf("Enter number\n");
scanf("%d",&num);
if(num&1)
	printf("Odd\n");
else
	printf("Even\n");

}
}
