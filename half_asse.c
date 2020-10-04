#include<stdio.h>
void main()
{
   //int i;
   int arr[] = {5,4,3,2,1,6,7,8,9,10},i;
    func(arr,10);
    for(i=0;i<=9;i++)
    printf(" %d", arr[i]);
    getch();
    }
    void func(int arr[],int N)
    {
    int round,i,temp,roundA;
    for(roundA=1;roundA<=N/2;roundA++)
    {
        for(i=0;i<=N/2-1-roundA;i++)
        {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

            }}}
            for(round=1;round<=5;round++)
                for(i=N/2;i<=N-1-round;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    temp = arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;


            }
              }
              }



