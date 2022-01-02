#include<stdio.h>
int main()
{
	int row,col,sum=0,x[3][3];
	printf("enter the elements for matrix :\n");

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
   }
  
  
    
    printf("the digonal matrix is :\n");
    for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{if(row==col)
   {
		printf("%d",x[row][col]);
	  sum+=x[row][col];}
	  else
	  printf("\t");
   }
  printf("\n");
   }
   printf("the sum of the diagonal of matrix is = %d\n",sum);
   return 0;
}
