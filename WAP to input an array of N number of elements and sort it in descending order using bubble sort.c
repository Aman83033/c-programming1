#include<stdio.h>
int main()
{
	int size,i;
	printf("enter size of an array");
	scanf("%d",&size);
	int temp,a[size],j;
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i;j++)
		{if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}}
	}
	for(i=size-1;i>=0;i--)
	{
	printf("%d\t",a[i]);
	}
	return 0;
}
	
