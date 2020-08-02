#include<stdio.h>
#include<stdlib.h>
//Prefix SumArray 
void main()
{
	int size;
	scanf("%d",&size);
	int a[100000];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int prefixsum[1000000];
	prefixsum[0]=a[0];
	for(i=1;i<size;i++)
		prefixsum[i]=prefixsum[i-1]+a[i];

	printf("PrefixSum array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",prefixsum[i]);
	}
	//if we want to calculate sum between a range, simply calc prefix[higher limit]-prefix[lower limit]
}