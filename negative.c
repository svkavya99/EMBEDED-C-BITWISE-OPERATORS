#include<stdio.h>
int main()
{
int num;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
if((num>>31)&1==1)
printf("IT IS A NEGATIVE NUMBER\n");
else
printf("IT IS A POSITIVE NUMBER\n");
return 0;

}	
