#include<stdio.h>
#include<math.h>
int main()
{
	float principalvalue,rate,time,compoundinterest;
	scanf("%f%f%f",&principalvalue,&rate,&time,&compoundinterest);
 compoundinterest=principalvalue*(pow((1+rate/100),time));
	printf("%f",compoundinterest);
	return 0;
}
