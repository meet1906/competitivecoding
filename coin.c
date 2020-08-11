#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size,sum=0,i;
	scanf("%d",&size);
	int a[10000];
	for(i=0;i<size;i++)
	{	
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{	
		sum=sum+a[i];
	}
	int desiredsum = sum/3;
	
	
		
