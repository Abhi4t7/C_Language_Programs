#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=15;j++)
    {
        if(j>=8-i && j<=6+i)
            //gotoxy(40,13);
            printf("*");
        else
        //gotoxy(40,13);
            printf(" ");
    }

    printf("\n");
    }


   // printf("\n");
    getch();
}
