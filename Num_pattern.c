#include<stdio.h>
void main()
{
    int i,j,p;
    for(i=1;i<=9;i++)
    {
       p=i;

        for(j=1;j<=9;j++)
        {
         if( j<=i )
        {
            printf("%d",p);
            p--;}
          else
        printf(" ");
     }
     printf("\n");
    }
}
