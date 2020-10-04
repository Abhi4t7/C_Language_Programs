#include<stdio.h>
void main()
{
    int a,b,H;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
      if(a%H==0 && b%H==0)
      {
          printf("HCF = %d",H);
          break;
      }
    }
    getch();
}
