#include<stdio.h>

struct student
{
	char name[20];
	int id;
};
int main()
{
	struct student s[2]={{"vinit",100},{"abhi",101}};
	FILE *fp=fopen("student","w");
	printf("position=%d\n",ftell(fp));
	fwrite(s,sizeof(s),2,fp);
	printf("position=%d\n",ftell(fp));
	struct student sample;
	fclose(fp);
	fp= fopen("student","r");
	printf("position=%d\n",ftell(fp));
//	fseek(fp,sizeof(struct student),SEEK_SET);
	printf("position=%d\n",ftell(fp));
	fread(&sample,sizeof(sample),1,fp);
	puts(sample.name);
	printf("%d\n",sample.id);
}
	
