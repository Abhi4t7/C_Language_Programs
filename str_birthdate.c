#include<stdio.h>
void main()
{
    int i=0,p,c,d=0,k=0,j=0,s,m=0;
    int arr[50];
    char ch[50];
    printf("Enter your Birth_date\n");
    gets(ch);
    //char ch[]="09/01/1947";
    for(j=i;ch[j]!='\0';j++)
    {
    for(i=j;ch[i]!='/' && ch[i]!='\0';i++)
    {
     p=ch[i]-48;
     d=d*10+p;
     }
      arr[k]=d;
      k++;
      d=0;
      j=i;
     }
      for(m=0;m<k-1;m++)
      printf("%d \n",arr[m]);
     }
