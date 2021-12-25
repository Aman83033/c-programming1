
	#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of an array");
	scanf("%d",&n);
	int temp,a[n],j;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}}
	}
	
		printf(" second smallest no. =%d\n",a[1]);
	printf(" second largest no. =%d",a[n-2]);
	return 0;
	
}
