#include<stdio.h>
void main()

{
    while(1){
int i,j,temp,round,N,k;
int arr[10];
printf("enter the numbers \n");
for(j=0;j<=9;j++)
    scanf("%d",&arr[j]);


   // int temp,round,i;
for(round=1;round<=10;round++)

 for(i=0;i<=9;i++)
 {
     if(arr[i]<=arr[i+1])
     {
         temp = arr[i];
         arr[i]= arr[i+1];
         arr[i+1] =temp;
     }

 }
//sort(arr,10);
for(k=0;k<=9;k++)
printf(" %d",arr[k]);
getch();
printf("\n");
     }
}


