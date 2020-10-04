#include<stdio.h>
int main()
{

    int arr[] = {8,7,6,5,4,3,2,1};
    int i;
    sort(arr,8);
    for(i=0;i<=7;i++)
    printf("%d ",arr[i]);
    getch();
    }
    void sort(int arr[],int N)
    {
    int round,i,temp;
    for(round=1;round<=N;round++)
         for(i=0;i<=N-round-1;i++)
        {
        if(arr[i]<arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]= temp;
            }
              }}


