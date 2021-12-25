#include<stdio.h>
int main()
{ int x[5],i,max,min,min2;
printf("enter number\n");
for(i=0;i<5;i++)
{
	printf("element of [%d]=",i);
	scanf("%d",&x[i]);
}
max=x[0];
for(i=0;i<5;i++)
{if(max<x[i])
max=x[i];
}
printf("Maximum number=%d",max);

printf("\nmin number=");
min=x[0];
for(i=0;i<5;i++)
{if(min>x[i])
min=x[i];
}
printf("%d",min);
printf("\nafter swapping the main and maximum\n");
max=max+min;
min=max-min;
max=max-min;
printf("max number=%d,min number=%d",max,min);
printf("\nafter swapping the min ad max value array\n");
min2=min;
for(i=0;i<5;i++)
{
if(x[i]==min)
{

x[i]=max;
printf("%d\t",x[i]);
}
else if(x[i]==max)
{
	
	x[i]=min;
	printf("%d\t",x[i]);
}
else
printf("%d\t",x[i]);
}
return 0;
}
