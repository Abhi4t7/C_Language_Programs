
#include<stdio.h>
void main()
{
    char str[20];
    int a=0;
    char *p=str;
    printf("Enter the name  ");
   scanf("%s",&str);
   // gets(str);
    while(*p!='\0')
    {
   a++;
   p++;
    }

    printf("%d",a);


}
