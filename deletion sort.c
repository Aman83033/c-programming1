#include<stdio.h>
int main()
{
	int i,n,num,pos;
	printf("enter the size\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{printf("%d\t",a[i]);
	}
	printf("\n");

	printf("enter the position",&pos);
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}

	printf("tne updated array is\n)");
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
