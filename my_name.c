#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=100;j++)
    {
        if(j==8 && i>=2 || i==1 && j>=9 && j<=14 || i==4 && j>=9 && j <=14 || j==15 && i>=2 || j==18 && i>=1 ||
            i==1 && j>=19 && j<=24 || i==4 && j>=19 && j<=24 || i==7 && j>=19 && j<=24 || j==25 && i<=3 && i>=2 ||
            j==25 && i<=6 && i>=5 || j==28 && i>=1 || j==35 && i>=1 || i==4 && j>=29 && j<=34 || j==41 && i>=1 ||
            i==1 && j>=38 && j<=44 || i==7 && j>=38 && j<=44)
        {

            printf("*");
        }
        else
            printf(" ");
    }
    printf("\n");
    }
    getch();
    }
