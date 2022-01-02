#include<stdio.h>
int main()
{
	int row,col,sum=0,x[3][3];
	printf("enter the elements for matrix");
	printf("\n");
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{ printf("elements in [%d],[%d] = ",row,col);
   		scanf("%d",&x[row][col]);
	   }
   }
  for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{ printf("%d\t",x[row][col]);
   		
	   }
	   printf("\n");
   }for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{if(row==col)
   {
	  sum+=x[row][col];}
	  
   }
  
   }
   printf("the sum of the diagonal of matrix is = %d\n",sum);

   return 0;
}
