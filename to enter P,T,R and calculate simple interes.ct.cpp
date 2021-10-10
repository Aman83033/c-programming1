#include<stdio.h>
int main()
{
	float principalvalue,rate,time,simpleinterest;
	scanf("%f%f%f",&principalvalue,&rate,&time,&simpleinterest);
	simpleinterest=(principalvalue*rate*time)*1/100;
	printf("%f",simpleinterest);
	return 0;
}
