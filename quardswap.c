#include<stdio.h>
int main()
{
int n=0x1234;
n=(n&0xF000)<<12|(n&0x0F00)<<4|(n&0x00F0)>>4|(n&0x000F)>>12;
printf("%d",n);
return 0;
}
