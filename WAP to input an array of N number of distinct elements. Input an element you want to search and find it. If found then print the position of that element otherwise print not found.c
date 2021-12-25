#include<stdio.h>
int main()
{
	
	int i,a,n;
	
	
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("enter another no.=  ");
	scanf("%d",&a);
	int found=0;
	for(i=0;i<n;i++)
	{
	  
	  if(arr[i]==a)
	  {
	  printf("element found and the position of the element is= %d",i+1);
	  
	  found++;}
}
if(found==0)
printf("element not found");
	  
	return 0;
}
