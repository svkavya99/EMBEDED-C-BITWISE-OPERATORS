#include<stdio.h>
int main()
{
int num=0,n,dec,rem,base=1;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
n=num;
while(num>0)
{
rem=num%10;
dec=dec+rem*base;
num=num/10;
base=base*2;
}	
printf("THE DECIMAL NUMBER IS %d\n",dec);
}
