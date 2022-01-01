#include<stdio.h>
int main()
{
	int i,n,j,rot,temp;
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
	printf("enter the no. of rotation\n");
	scanf("%d",&rot);
	for(j=1;j<=rot;j++)
{temp=a[0];
for(i=0;i<n-1;i++)
{
a[i]=a[i+1];	
	}	
	a[i]=temp;
}
printf("the updated array is\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
	
}
	return 0;
}
