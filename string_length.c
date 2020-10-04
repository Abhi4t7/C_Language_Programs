#include<stdio.h>
void main()

{
    int i,j,k=0;
    char str[20];
    printf("Enter the string= ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    printf("%d\n",i);
}
