#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,sum=0,sum1=0;
	float average,a;	
	printf("Enter the value of row: ");
	scanf("%d",&m);
	printf("Enter the value of column: ");
	scanf("%d",&n);
	int x[m][n],i,j;
	printf("Enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("---------------------------\n\n");
	printf("The matrix is:\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{sum=0;
		for(j=0;j<n;j++)
		{
			sum+=x[i][j];
		}
		printf("sum of %d row is %d\n",i+1,sum);
}
printf("-----------------------------------------------\n");
	for(i=0;i<m;i++)
	{sum1=0;
		for(j=0;j<n;j++)
		{
			sum1+=x[j][i];
		}
		printf("sum of %d column is %d\n",j+1,sum1);
}
	
	
	
	
	
	
	
	
	return 0;
}
