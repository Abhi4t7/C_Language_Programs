/*sample code*/

#include<stdio.h>
void main()
{
    int i,p,c,d=0;
    char ch[]="125";
    for(i=0;ch[i]!='\0';i++)
    {
    p=ch[i]-48;
    printf("%d",p);
    d=d*10+p;
    }
    printf("\n");
     c=d+5;
    printf("%d\n",c);
}
