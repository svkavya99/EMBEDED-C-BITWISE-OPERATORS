#include<stdio.h>
int main()
{
int a,b;
printf("ENTER A NUMER\n");
scanf("%d",&a);
printf("ENTER another number\n");
scanf("%d",&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d\n",a);
printf("%d\n",b);
return 0;
}
