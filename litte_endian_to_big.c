#include <stdio.h>
 
 
 
 int swapnib(int x)
 {
    return ((0x000000ff & x) <<24 | (0x0000ff00 & x) << 8 | (0x00ff0000 & x) >> 8 | (0xff000000 & x) >> 24);
     

 }
int main(void)
{
 int value = 0x11223344;
 printf("Value Before Converting = 0x%x\n", value);
 printf("Value After Converting = 0x%x\n", swapnib(value));
 return 0;
}
