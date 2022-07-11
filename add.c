#include<stdio.h>
int main()
{
int n;
printf("ENTER A NUMBER\n");
scanf("%d",&n);
n=-(~n);
printf("%d",n);
return 0;
}
