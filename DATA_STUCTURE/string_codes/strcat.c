#include<stdio.h>
int str(char [],char[]);
int main()
{
char ch[50],ch2[50];
int count=0,ans;
printf("enter the string first\n");
gets(ch);
printf("enter the string second\n");
gets(ch2);

ans=str(ch,ch2);
printf("copy=%s\n",ans);
//puts(ch);
//puts(ch2);
}
int str(char ch[],char ch2[])
{
    int i,N=0;
    for(i=0;ch[i]!='\0';i++)
     {
     N++;
     }
     i=0;
    while(ch2[i]!='\0')
    {

        ch[N]=ch2[i];
        N++;
        i++;
    }
      ch[N]='\0';
       return(ch);

}

