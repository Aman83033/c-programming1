#include<stdio.h>
int main()
{
	int i,size,smallest;
	printf("enter the size for array:");
	scanf("%d",&size);
	int a[i];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]<smallest)
		smallest=a[i];
	}
	printf("smallest=%d",smallest);

return 0;
}
