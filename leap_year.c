#include<stdio.h>
void main()

{
    while(1){
int year;
printf("\nEnter the year ");
scanf("%d",&year);
if(year%100==0)
{
    if(year%400==0){
      //  if(year%400==0)
        printf("year is leap year");}
        else
            printf("year is not a leap year");
}
else {
        if(year%4==0)
    printf("year is a leap yaer");

    else
        printf("year is not a leap year");
}}

    printf("\n");
getch();
    }

