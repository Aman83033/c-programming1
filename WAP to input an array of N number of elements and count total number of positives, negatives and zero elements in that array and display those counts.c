#include<stdio.h>
int main()
{
	int i,size,positive_count=0,negative_count=0,zero_count=0;
	printf("enter the size of array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<size;i++)
	{
	if(a[i]>0)
	{
		positive_count++;
	}

	
	if(a[i]<0)
	{
		negative_count++;
	}
	
	
	if(a[i]==0)
	{
		zero_count++;
	}
}
printf("positive_count=%d\nnegative_count=%d\nzero_count=%d",positive_count,negative_count,zero_count);
return 0;
}
