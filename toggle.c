#include<stdio.h>
void decimaltobinary(unsigned int number);
int main()
{
unsigned int x,p,k,s;
printf("ENTER A NUMBER");
scanf("%d",&x);
printf("ENTER The position to toggle a bit");
scanf("%d",&p);
decimaltobinary(x);
printf("\n");
x=x^(0x1<<p);
decimaltobinary(x);
//printf("%d",s);
return 0;	
}
void decimaltobinary(unsigned int number)
{
int i,j;
for(i=31;i>=0;i--)
{
j=number>>i;
if(j&1)
printf("1");
else
printf("0");	
}
}
