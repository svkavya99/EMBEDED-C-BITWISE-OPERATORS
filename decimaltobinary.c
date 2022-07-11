#include<stdio.h>
int main()
{
int num,i,j;
printf("ENTER A NUMBER");
scanf("%d",&num);
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
