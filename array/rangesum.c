#include<stdio.h>
#include<stdlib.h>
//Prefix SumArray 
void main()
{
	int size,sumh,suml;
	scanf("%d",&size);
	int a[100000];
	int i;
	int high,low,range;
	scanf("%d",&high);
	scanf("%d",&low);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int prefixsuml[1000000];
	int b[1000];
	prefixsuml[0]=a[0];
	for(i=1;i<low;i++)
		prefixsuml[i]=prefixsuml[i-1]+a[i];
	suml=prefixsuml[i-1];

	printf("PrefixSum lower array:\n");
	for(i=0;i<low;i++)
	{
		printf("%d\n",prefixsuml[i]);
	}
	//\n");
	b[0]=a[0];
	//printf("%d\n",b[0]);
	
	//prefixsumh[0]=a[0];
	//printf("%d\n",a[0]);
	for(i=1;i<high;i++)
		b[i]=b[i-1]+a[i];
	//printf("\n%d\n",b[i]);
	sumh=b[i-1];
	printf("PrefixSum higher array:\n");
	for(i=0;i<high;i++)
	{
		printf("%d\n",b[i]);
	}
	range=sumh-suml;
	printf("Range Sum is %d\n",range);
	//if we want to calculate sum between a range, simply calc prefix[higher limit]-prefix[lower limit]
} 