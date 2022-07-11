#include<stdio.h>
unsigned int reversebits(unsigned int num);
unsigned int dectobin(unsigned int n);
int main()
{
unsigned int num,i,j,k,s;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
k=reversebits(num);
s=dectobin(k);
printf("REVERSE BITS OF K IS %d",s);
return 0;
}
unsigned int reversebits(unsigned int num)
{
int revbits=0,count=0;
while(num>0)
{
revbits=revbits<<1;
if(num&1==1)
{
revbits=revbits^1;
}
num=num>>1;	
}
return revbits;
}
unsigned int dectobin(unsigned int n)
{
int i,j;
for(i=31;i>=0;i--)
{
j=n>>i;
if(n&1)
printf("1");
else
printf("0");	
}
}
