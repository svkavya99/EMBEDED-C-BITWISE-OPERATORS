#include<stdio.h>
int main()
{
int num,c=0;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
if((num&(num-1))==0)
{
	while(num)
	{
		if((num&1)==0)
		c++;
                num=num>>1;
	}
//	printf("%d",c);
	if(((c&1)==0))
	printf("GIVEN NUMBER IS POWER OF 4\n");
        else
	printf("GIVEN NUMBER IS NOT POWER OF 4\n");	
}
else
printf("GIVEN NUMBER IS NOT POWER OF 2\n");
return 0;
}
