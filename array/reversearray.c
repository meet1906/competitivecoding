#include<stdio.h>
#include<stdlib.h>
//array reverse
void main()
{
	int size,j;
	scanf("%d",&size);
	int a[100000];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int b[10000];
	for(i=size-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	printf("Reverse Array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",b[i]);
	}
}