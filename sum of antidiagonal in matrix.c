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
   printf("required matrix is\n ");
    for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{ printf("%d\t",x[row][col]);
}
printf("\n");
}
printf("\n");
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
	   if(row+col==2)
   	
	  sum+=x[row][col];
   }
  
   }
    printf("the sum of the anti-diagonal of matrix is = %d",sum);
   return 0;
}
