#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
        {
        for(j=1;j<=9;j++)
        {
            if(j>=7-i && j<=7-i || j>=5+i && j<=5+i  )

            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
   printf(" * * * * *");
    getch();
}
