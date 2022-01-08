#include<stdio.h>
void factorial()
{
	int i,num,fact=1;
	printf("enter the number :\n");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
int main()
{
	factorial();
	return 0;
}
