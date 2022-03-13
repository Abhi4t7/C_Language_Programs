#include<stdio.h>

int main()
{


	int i,j,cnt=0,flg;
	int arr[3][4];
	int tmp[6][2];
	printf("Enter 2D array element\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			if(arr[i][j]!=1)
			{
				cnt++;
			}

		}
flg=12-cnt;
	for(i=0;i<12;i++)
		for(j=0;j<2;j++)
		{
			if(j==0 && cnt>0 )
			{
				printf("0");
				cnt--;
			}

           		if(j==1 && flg>0 )
			{
				printf("1");
				flg--;
			}
			else
			printf(" ");

		  if(j==1)
			printf("\n");

		}

}

