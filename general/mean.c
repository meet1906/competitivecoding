#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	int mean;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean = sum/n;
	printf("MEAN: %d",mean);
}
