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
	printf("enter the number which you want to insert\n");
	scanf("%d",&num);
	printf("enter the position",&pos);
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	printf("tne updated array is\n)");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
