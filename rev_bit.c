
#include <stdio.h>
#define size sizeof( int)*8 
int k=size/2;
 int swapNibbles(int x)
{
    return ( (x & 0x0000FFFF)<<k | (x & 0xFFFF0000)>>k );
}
 
int main()
{
    int x;
    printf("Enter num\n");
    scanf("%d",&x);
    printf("%d", swapNibbles(x));
    return 0;
}
