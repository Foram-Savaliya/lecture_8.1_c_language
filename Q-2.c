#include<stdio.h>

void main()
{
	int i,n,sum=0;
	float average;
	
	printf("enter the size of array:- ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}	
	printf("your sum is %d\n",sum);
	average=sum/n;
	printf("average of an array:-%f",average);
}
