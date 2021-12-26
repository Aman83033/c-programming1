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
	for(i=0;i<size;i++)
	{
	   printf("%d\t",a[i]);
}
int c,b;
printf("enter the number which you want to input\n:");
scanf("%d",&c);
printf("enter the position of number:\n");
scanf("%d",&b);
a[b-1]=c;
for(i=0;i<size;i++)
{
	printf("%d",a[i]);
}
return 0;
}
