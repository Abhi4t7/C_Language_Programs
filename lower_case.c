#include<stdio.h>
void main()
{
    int i;
    char string[15];
    printf("Enter the string");
    gets(string);
    for(i=0;i<=string[i];i++)
    {
        if( string[i] >= 'A' && string[i] <= 'Z')

    string[i]=string[i]+32;
    }
    printf("%s",string);
}
