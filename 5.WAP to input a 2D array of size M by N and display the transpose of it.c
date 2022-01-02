#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("enetr the no. of rows for array :\n");
	scanf("%d",&r);
	printf("enter the no. of column :\n");
	scanf("%d",&c);
	int a[r][c];
	printf("enter the elements:\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		printf("%d\t",a[i][j]);
	}
		printf("\n");
}
printf("-------------------------------------\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
	printf("%d\t",a[j][i]);
}printf("\n");
}
return 0;
}
