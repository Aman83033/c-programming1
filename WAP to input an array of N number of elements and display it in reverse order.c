#include<stdio.h>
int main()
{
	int i,size;
	printf("enter the size of array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
	
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=size-1;i>=0;i--)
	{
		printf("the reverse order is=%d\t",a[i]);
	}
	return 0;
}
