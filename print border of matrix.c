#include<stdio.h>
int main()
{
	int row,col,x[3][3];
	printf("enter the elements for matrix");
	printf("\n");
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{ printf("elements in [%d],[%d] = ",row,col);
   		scanf("%d",&x[row][col]);
	   }
   }
   printf("the required matrix is\n");
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{if(row==col)
   		printf("%d\t",x[row][col]);
	  else 
	   printf("\t");
   }
   printf("\n");
   }
   return 0;
}
