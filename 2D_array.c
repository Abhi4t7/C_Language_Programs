#include<stdio.h>
int main(){

	char disp[5][4];
	int i, j;
	for(i=0; i<5; i++) 
	{
		printf("Enter value for disp:\n");
		scanf("%s", disp[i]);
	}
printf("Two Dimensional array elements:\n");
for(i=0; i<5; i++) 
{
	printf("%s \n", disp[i]);
}
}
