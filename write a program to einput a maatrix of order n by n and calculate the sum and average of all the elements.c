#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,sum=0;
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
	{
		for(j=0;j<n;j++)
		{
			sum+=x[i][j];
		}
	}
	printf("\n\n");
	printf("The sum of all the elements is %d\n",sum);
	a=m*n;
	average=sum/a;
	printf("\nThe average of all the elements is %f",average);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
