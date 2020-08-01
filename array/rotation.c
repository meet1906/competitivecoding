//Program to perform rotation of array
#include<stdio.h>
#include<stdlib.h>
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
	int k;
	scanf("%d",&k);
	int temp[1000];
	for(i=0;i<k;i++)
	{
		temp[i]=a[i];
	}
	//shifting all the elements after k to the left by k positions
	for(i=k;i<size;i++)
	{
		a[i-k]=a[i];
	}
	int j=0;
	for(i=size-k;i<size;i++)
	{
		a[i]=temp[j++];

	}
	printf("\n Anti-CLockwise Rotated Array: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}