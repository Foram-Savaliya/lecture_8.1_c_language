#include<stdio.h>

void main()
{
	int i,n,sum=0;
	float average;
	
	printf("enter the size of array:- ");
	scanf("%d",&n);
	
	int a[n];
	int b[n],c[n];
	
	printf("enter array A's element :\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	
	printf("enter array B's element :\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :-",i);
		scanf("%d",&b[i]);
	}
	
	printf("the sum of array A and B is ");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];	
		printf("%d , ",c[i]);
	}
}
