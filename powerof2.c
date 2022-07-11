#include<stdio.h>
int main()
{
int num;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
if((num&(num-1))==0)
printf("Given number is power of 2\n");
else
printf("GIVEN NUMBER IS NOT POWER OF 2\n");
return 0;
}
