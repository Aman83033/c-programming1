#include<stdio.h>
int main()
{
	int row,col,x[3][3];
	printf("enter the elements for matrix");
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
   		scanf("%d",&x[row][col]);
	   }
   }
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
   		printf("%d\t",x[row][col]);
	   }
	   printf("\n");
   }
   return 0;
}
