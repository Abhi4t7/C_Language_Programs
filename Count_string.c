#include<stdio.h>
void main()
{
  int i,b=1,f=1;
  char str[100];
  printf("Enter the string = ");
  //scanf("%s",&str);
  gets(str);
  // for(i=0;str[i]!=0;i++)
  for(i=0;i<=str[i];i++)
    {
     if(str[i]==str[i+1])
     {
         b++;
         f=0;
      }
       if(f==1)
{
        printf("%c%d",str[i],b);
        b=1;
        }
        f=1;
        }
}
