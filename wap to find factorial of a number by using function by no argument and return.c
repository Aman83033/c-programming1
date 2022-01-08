#include<stdio.h>
int factorial()
{
	int i,num,fact=1;
	printf("enter the number :\n");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{ printf("%d",factorial());
	
	return 0;
}
