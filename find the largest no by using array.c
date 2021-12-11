#include<stdio.h>
int main()
{
	int i,size,largest;
	printf("enter the size for array:");
	scanf("%d",&size);
	int a[i];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>largest)
		largest=a[i];
	}
	printf("largest=%d",largest);

return 0;
}
