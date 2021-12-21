#include<stdio.h>
int main()
{
	int row,col,sum=0,x[3][3],y[3][3];
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
   printf("product of matrix is \n");
   for(row=0;row<3;row++)
   { sum=0;
   for(col=0;col<3;col++)
   {
   
   	sum+=x[row][col]*y[col][row];}
   	z[row][col]=sum;
   	printf("%d\n",z[row][col]);

}
   	
   return 0;
}
