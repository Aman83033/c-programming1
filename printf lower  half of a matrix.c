#include<stdio.h>
int main()
{
	int m,n,i,j,found=0;
	printf("Enter the number of rows:\n");
	scanf("%d",&m);
	printf("Enter the number of columns:\n");
	scanf("%d",&n);
	int x[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Elements [%d],[%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("-------------------------------------------\n\n");
	printf("The matrix you inputed:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
		printf("lower half of the matrix isc :\n");
	for(i=0;i<m;i++)
	{	
		for(j=i;j>=0;j--)
		{
		  printf("%d\t",x[i][j]);
		   }
		   printf("\t\n");
	}
	return 0;
}
