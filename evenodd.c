#include<stdio.h>
int main()
{
int num;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
if((num&1)==0)
printf("Given number is even");
else
printf("Given number is odd");
return 0;

}	

