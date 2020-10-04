#include<stdio.h>
void main()
{
    int a,b,H;
    printf("enter the two numbers ");
    scanf("%d%d",&a,&b);
    for(H=1;H<=a*b;H++)
    {
      if(H%a==0 && H%b==0)
      {
          printf("LCM = %d",H);
            break;
   // printf("LCM = %d",H);
      }
    }
    getch();
}


