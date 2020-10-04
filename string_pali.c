#include<stdio.h>
void main()

{
    int i,j,k=0;
    char str[20];
    printf("Enter the string= ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    j=i-1;
    i=0;

   while(j>=0)
    {
   if(str[i]!=str[j])
   {
       k=1;
       break;
   }
    i=i+1;
    j=j-1;
        }
if(k==1)
    printf(" Not palidrom");
else
    printf("palidrom");
}
