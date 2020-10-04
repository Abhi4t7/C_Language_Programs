#include<stdio.h>
void main()
{
  int arr[10];
  int i,min;
  printf("Enter the 10 numbers = ");
  for(i=0;i<=9;i++)
  {
   scanf("%d",&arr[i]);
  }
  min = arr[0];
  for(i=0;i<=9;i++)
  {
  if(min>=arr[i])
  {
    min=arr[i];
    printf("smallest number is %d",min);
  }

  }
  getch();
}
