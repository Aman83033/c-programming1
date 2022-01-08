#include<stdio.h>
void totalbill(void)
{
	float charge;
	printf("Enter the meal charge:\n");
	scanf("%f",&charge);
		printf("meal charge after removing discount:\n");
	charge -=(0.10*charge);
		printf("%f\n",charge);
		printf("meal charge after adding tax:\n");
	charge +=(0.20*charge);
		printf("%f\n",charge);
		printf("meal charge after giving tip:\n");
	charge +=(0.15*charge);
		printf("%f\n",charge);
		printf("total meal charge:\n");
	printf("%f",charge);
}
int  main()
{
	totalbill();
	
	return 0;
}
