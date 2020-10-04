#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==1 && i>=1)
                printf("1");
                if(j==2 && i>=2)
                    printf("2");
                if(j==3 && i>=3)
                    printf("3");
                if(j==4 && i>=4)
                    printf("4");
                    if(j==5 && i>=5)
                    printf("5");
            else
                {
                printf("");

                }
        }
        printf("\n");


        }
    }
