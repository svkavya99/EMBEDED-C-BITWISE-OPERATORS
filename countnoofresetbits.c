#include<stdio.h>
int main()
{
int num,arr=0,a=1,res=0,c=0;
printf("ENTER A NUMBER\n");
scanf("%d",&num);
while(num)
{
res=num%2;
arr=arr+a*res;
num=num/2;
a=a*10;
}
printf("%d\n",arr);
while(arr)
{
 if((arr&1)==0)
 {
	 c++;
 }
	 arr=arr>>1;

}
printf("%d\n",c-1);
return 0;
}
