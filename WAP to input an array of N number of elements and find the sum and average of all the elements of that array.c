#include<stdio.h>
int main()
{
	int i,size,sum=0,average;
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
	for(i=0;i<size;i++)
	{
		sum+=a[i];
	}
	printf("sum=%d\t",sum);
	average=sum/size;
	printf("average=%d",average);
	return 0;
}
