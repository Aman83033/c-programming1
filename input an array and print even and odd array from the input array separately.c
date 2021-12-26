#include<stdio.h>
int main()
{
	int i,n,count1=0,count2=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("required array is\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
}
printf("\n");
printf("the even array is\n");
int x[count1],y[count2];
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	count1++;
}
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
	count2++;
}

for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{x[i]=a[i];
		printf("%d\t",x[i]);
	}
}
printf("\n");
printf("the odd array is\n");
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
	{y[i]=a[i];
		printf("%d\t",y[i]);
	}
}
return 0;
}

