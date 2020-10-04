#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=15;j++)
    {
        if(i==1 && j<=3 || i==2 && j==1 || i==3 && j<=3 || i==4 && j==3 || i==5 && j<=3 || i<=5 && j==6 || i<=5 && j==9 || i==1 && j>=8 && j<=11 || i==5 && j>=8 && j<=11 || j==12 && i<=5 )
        {
          // if(i==1 && j==5)

            printf("*");
        }
        else
            printf(" ");
    }
    printf("\n");
    }
    getch();
    }
