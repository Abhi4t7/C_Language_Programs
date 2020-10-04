#include<stdio.h>
void main()
{
int N,i=1,add=0;
printf("Enter the number");
scanf("%d",&N);
while(i<=N){
    add = add+i;
    i++;
}
printf("addition = %d",add);
getch();
}
