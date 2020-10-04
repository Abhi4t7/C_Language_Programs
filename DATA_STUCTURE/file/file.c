#include<stdio.h>

struct student
{
char name[4];
int id;
};

int main()
{

FILE *fp=fopen("Datafile","w");
if(fp==NULL)
{
printf("file write failed\n");
exit(1);
}
struct student std[2]={{"Vinit",100},{"Abhii",47}};
fwrite(std,sizeof(std),1,fp);
//fwrite("Abhi",1,4,fp);
//fwrite("vinit",1,5,fp);
fclose(fp);
}

struct student sample;
fp=fopen("Datafile","r");
while(fread(&sample,sizeof(sample),1,fp))
{
puts(sample.name);
printf("%d\n",sample.id);
}
fclose(fp);
}
*/


