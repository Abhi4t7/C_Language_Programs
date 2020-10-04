#include<stdio.h>
void main()
{
   int arr[] = {12,20,25,45,52,3,28,54};
    int i;
    sort(arr,8);
    for(i=0;i<=7;i++)
    printf(" %d", arr[i]);
    getch();
    }
    void sort(int arr[],int N)
    {
    int round,i,temp;
    for(round=1;round<=N;round++)
        for(i=0;i<=N-1-round;i++)
        {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

            }

              }
              }



