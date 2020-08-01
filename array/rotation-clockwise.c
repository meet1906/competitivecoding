#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size;
	scanf("%d",&size);
	int a[100000];
	int b[100000];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	int k;
	scanf("%d",&k);
	int temp[1000];
	int j=0;
	for(i=0;i<size;i++)
	{
		b[i]=a[i];
	}
	for(i=size-k;i<size;i++)
	{
		temp[j++]=a[i];
		//j++;
	
		//printf("%d\n",temp[i]);
	}

	for(i=k;i<size;i++)
	{
		a[i]=b[i-k];
	}
	//for(i=size-k;i<size;i++)
	//{
	//	temp[j++]=a[i];
		//j++;
	
		//printf("%d\n",temp[i]);
	//}
	for(i=0;i<k;i++)
	{
		a[i]=temp[i];
	}
	printf("\n Clockwise Rotated Array: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}