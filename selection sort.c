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
		for(j=0;j<size;j++)
		{if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}}
	}
	for(j=0;j<size;j++)
	{printf("%d\t",a[j]);
	}
}
