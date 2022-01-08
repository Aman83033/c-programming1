#include<stdio.h>
void QUAD()
{
	int a,b,c,d;
	printf("enter the coefficients of x^2 in quadratic equation:\n");
scanf("%d",&a);
printf("enter the coefficients of x in quadratic equation:\n");
	scanf("%d",&b);
	printf("enter the constant value in quadratic equation:\n");
	scanf("%d",&c);
	d=b*b-4*(a*c);
	if(d>=0)
	printf("roots are real\n");
	else
	printf("roots are imaginary");
}
int main()
{
	QUAD();
	return 0;
}
