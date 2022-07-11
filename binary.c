#include<stdio.h>
int main()
{
	int num,index,i,int_size;
	int bin[int_size];
	int_size=sizeof(int)*8;
	printf("Enter any number:");
	scanf("%d",&num);
	index=int_size-1;
	while(index>=0)
	{
		bin[index]=num & 1;
		index--;
		num>>=1;
	}
	printf("converted binary :");
	for(i=0;i<int_size;i++)
	{
			printf("%d",bin[i]);
	}
	return 0;
}


