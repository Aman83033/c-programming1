#include<stdio.h>
int main()
{
	int row,col,x[3][3],y[3][3];
	printf("enter the elements for first matrix\n");
   for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
   		scanf("%d",&x[row][col]);
	   }
   }
   printf("enter the elements for second matrix \n");
    for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
   		scanf("%d",&y[row][col]);
	   }
   }
   printf("first matrix \n");
    for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
   		printf("%d\t",x[row][col]);
	   }
	   printf("\n");
   }
   printf("second matrix \n");
    for(row=0;row<3;row++)
   {
   	for(col=0;col<3;col++)
   	{
   		printf("%d\t",y[row][col]);
	   }
	   printf("\n");
   }
   int z[3][3];
   printf("sum of matrix is \n");
   for(row=0;row<3;row++)
   {for(col=0;col<3;col++)
   {
   
   	z[row][col]=x[row][col]+y[row][col];
   	printf("%d\t",z[row][col]);
   }
  printf("\n");
}
   	
   return 0;
}
