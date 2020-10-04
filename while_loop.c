
#include<stdio.h>
void main()
{
    int num1,num2,i=1;
    printf("Enter the number");
    scanf("%d",&num1);
while(i<=num1){
        if(num1%i==0)
        printf("%d ",i);
       i++;
}
}
