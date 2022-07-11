#include<stdio.h>
int main()
{
unsigned int n=0x12,k;
n=((n<<4)&(0xF0))|((n>>4)&(0x0F));
printf("%x\n",n);
return 0;
}
