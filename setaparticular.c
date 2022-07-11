#include<stdio.h>
int main()
{
int num,pos,i,j;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
printf("enter a pos\n");
scanf("%d",&pos);
num=num|(0x1<<pos);
for(i=31;i>=0;i--)
{
	j=num>>i;
	if(j&1)
		printf("1");
	else
		printf("0");
}
printf("\n");
return 0;
}
