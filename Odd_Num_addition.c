#include<stdio.h>
void main()
{
  int N,i=1,add=0;
  printf("enter the number");
  scanf("%d",&N);
 while(i<=N){
      add=add+2*i-1;
      i++;
  }

printf("addition = %d",add);

   getch();

}
